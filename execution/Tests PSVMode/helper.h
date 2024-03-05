#include <chrono>
#include <ctime>
#include <iostream>
#include <sstream>
#include <fstream>
#include <regex>
#include <vector>
#include <map>
#include <getopt.h>
#include <stdexcept>
#include <string>
#include <iomanip>

/*
 * @brief Regex expresssion used to parse
 *            event labels and parameters 
 */
#define LABEL_REGEX std::string("([0-9a-zA-Z*+_]*)")
#define PARAMS_REGEX std::string(LABEL_REGEX + "\\((.*)\\)")
#define SEPARATE_PARAMS_REGEX std::string("(\".*?\"|[^\",]+)(?=\\s*,|\\s*$)")
/*
 * @brief Safely executes events by catching exceptions
 *     
 */
#define ERROR_1 std::cout << "Event is not recognized" << "\n"
#define ERROR_2 std::cout << "Event is not executable" << "\n"
#define ERROR_5 std::cout << "Empty event label, terminating execution" << "\n"
#define ERROR_6 std::cout << "Wrong parameters type given" << "\n";
#define ERROR_7 std::cout << "Wrong number of parameters given" << "\n";

/*
 * @brief An object used to serialize types and get the appropriated values as of
 *        primitive types or complex types.
 */
class Types {
    
 public:
    
    static std::string get_str(const std::string s) { 
        return s; 
    }
    static int get_int(const std::string s, bool& flag) {
        std::istringstream iss(s);
        int temp;
        char c;
        if (!(iss >> temp) || (iss.get(c))){
            std::cerr << "Error: Failed to convert string to int: " << s << std::endl;
            flag = true;
            return 0;
        }
        return temp;
    }
    static float get_float(const std::string s, bool& flag) {
        try {
            return std::stof(s);
        } catch(const std::exception& e) {
            std::cerr << "Error: Failed to convert string to float: " << e.what() << std::endl;
            flag = true;
            return 0.0f; // Return only to allow program to continue
        }
    }
    static double get_double(const std::string s, bool& flag) {
        try {
            return std::stod(s);
        } catch(const std::exception& e) {
            std::cerr << "Error: Failed to convert string to double: " << e.what() << std::endl;
            flag = true;
            return 0.0; // Return only to allow program to continue
        }
    }
    static bool get_bool(const std::string s) { 
        if(s == "0" || s == "false"){
            return false;
        }
        return true;
    }
};

/*
 * @brief channel to read events
 */
static std::ifstream channel;
static std::string filename;

/*
 * @brief The event data structure containing its label and its parameters
 *
 */
struct Event 
{
    std::string label;
    std::vector<std::string> params;
};

Parameters parameters;
float paw_drop_in;
float last_inspiration_time;
Parameters updated_parameters;
float go_to_psv_from_pcv;
float peak_pinsp_psv;
bool move_to_pcv;
float ve;

void parametersInitialization(){
    string status ="";
    float expiratory_time=60/(parameters.rr_pcv*(1+parameters.ie_pcv));
    read_config("config.txt",status, parameters);
    updated_parameters = parameters;
    move_to_pcv=false;
    last_inspiration_time = 60*parameters.ie_pcv/(parameters.rr_pcv*(1+parameters.ie_pcv));
}

class IO
{
public:
    /*
     * @brief parses event parameters and sets the event object with these params
     * @param The event object to be set
     * @param The event string to be parsed 
     * @param The input regex to be used for parsing
     * @return 
     */
    static void get_event_params(Event& e, const std::string in) 
    {
        std::smatch matches;
        std::smatch matches2;
        if(regex_search(in, matches, std::regex(PARAMS_REGEX))) 
        {
            std::string ss = matches.str(2);
	        while(regex_search(ss, matches2, std::regex(SEPARATE_PARAMS_REGEX))){
                std::string input = matches2[0];
                std::stringstream ss2(input);

                std::string output;
                ss2 >> std::quoted(output);

                e.params.push_back(output);
                ss = matches2.suffix().str();
            }
        }
  
        return;   
    }

    /*
     * @brief parses event label and returns its value
     * @param The event string to be parsed
     * @return The event label
     */
    static std::string get_event_label(const std::string in) 
    {
        std::smatch matches;
        if(regex_search(in, matches, std::regex(LABEL_REGEX)))
	    return matches.str(1);

        return ""; 
    }

    /*
     * @brief Reads event from the Input stream
     * @param The cmdline arguments 
     * @return The event object
     */

    static void configInputStream(int argc, char** argv) 
    {
        const char* const short_opts = "i:1:2:3:4:5:h";

        const option long_opts[] = {
            {"parameters", required_argument, nullptr, '1'},
            {"paw_drop_in", required_argument, nullptr, '2'},
            {"inspiration_time", required_argument, nullptr, '3'},
            {"updated_parameters", required_argument, nullptr, '4'},
            {"go_to_psv_from_pcv", required_argument, nullptr, '5'},
        };
        parametersInitialization();
        while (true)
        {
             const auto opt = getopt_long(argc, argv, short_opts, long_opts, nullptr);
             if (-1 == opt)
                break;

             switch(opt)
             {
                    
             case 'i':
             {
                filename = std::string(optarg); 
                channel = std::ifstream(filename);
                if(!channel)
                    std::cout << "Error opening event file !!!";
                break;
             }
             
            /* case '1': 
             {
                 
                 bool flag = false;
                 parameters = Types::get_Parameters_type(optarg, flag);  
                 if(flag){
                      ERROR_6;
                 }
                 break;
             }
             case '2': 
             {
                 
                 bool flag = false;
                 paw_drop_in = Types::get_float(optarg, flag);  
                 if(flag){
                      ERROR_6;
                 }
                 break;
             }
             case '3': 
             {
                 
                 bool flag = false;
                 inspiration_time = Types::get_float(optarg, flag);  
                 if(flag){
                      ERROR_6;
                 }
                 break;
             }
             case '4': 
             {
                 
                 bool flag = false;
                 updated_parameters = Types::get_Parameters_type(optarg, flag);  
                 if(flag){
                      ERROR_6;
                 }
                 break;
             }
             case '5': 
             {
                 
                 bool flag = false;
                 go_to_psv_from_pcv = Types::get_float(optarg, flag);  
                 if(flag){
                      ERROR_6;
                 }
                 break;
             }*/
             case 'h':
             { 
                 std::cout << "This program has been compiled by cASTD." << "\n";
                 std::cout << "./my_program [-i <event file>] [-parameters <value>] [-paw_drop_in <value>] [-inspiration_time <value>] [-updated_parameters <value>] [-go_to_psv_from_pcv <value>]  [-h]" << "\n";
                 std::cout << "[OPTIONS]     								     " << "\n";
                 std::cout << "   -i <event  file>  Read an event file in Shorthand format." << "\n";
                 std::cout << "                     If an event file is not given, it runs in interactive" << "\n";
                 std::cout << "                     mode from command line" << "\n";
                    std::cout << "   -parameters <value> Parameter of the ASTD" << std::endl;
                    std::cout << "   -paw_drop_in <value> Parameter of the ASTD" << std::endl;
                    std::cout << "   -inspiration_time <value> Parameter of the ASTD" << std::endl;
                    std::cout << "   -updated_parameters <value> Parameter of the ASTD" << std::endl;
                    std::cout << "   -go_to_psv_from_pcv <value> Parameter of the ASTD" << std::endl;
                 
                 
                 
                 std::cout << "   -h                Show this help" << "\n";
                 exit(0);
                 break;
             }
             
         }   
     }
 }


    static Event read_event(int argc) 
    {
        Event e;
        std::string input;

        if(argc > 1) 
        {
            if(!filename.empty()) 
	            std::getline(channel, input); 
	        else 
	            std::getline(std::cin, input);
    	    e.label = get_event_label(input);
	        get_event_params(e, input);  
        }
        else 
        {
            getline(std::cin, input);
            e.label = get_event_label(input);
            get_event_params(e, input);
        }
     
        return e;
    }
};

;/*
* @brief Manages clock variables.
*
*/
class Timer {
private:
        std::time_t time_stamp;

public:
    //constructor definition
    Timer(std::time_t current_time){
        time_stamp = current_time;
    }

    bool expired(double duration, std::time_t current_time){
        return (current_time >= time_stamp + duration);
    }

    std::time_t getPassedTime(std::time_t current_time){
        return (current_time - time_stamp);
    }

    std::time_t getTimeStamp(){
        return time_stamp;
    }

    void reset_clock(std::time_t current_time){
        time_stamp = current_time;
    }

    void reset_clock(Timer ts){
        time_stamp = ts.getTimeStamp();
    }
};

//functions to simulate advance time

std::time_t convertToNano( std::time_t hour, std::time_t min, std::time_t sec, std::time_t millisec, std::time_t microsec, std::time_t nanosec){
    std::time_t currentTime = 0;
    currentTime = (((hour * 60 * 60) + (min * 60) + sec) * 1000000000) + (millisec * 1000000) + (microsec * 1000) + nanosec;
    return currentTime;
}

long int advanceToV1(std::time_t time_stamp, std::time_t step_time, std::string mixedvalues){
    
    std::time_t hour = 0;
    std::time_t min = 0;
    std::time_t sec = 0;
    std::time_t millisec = 0;
    std::time_t microsec = 0;
    std::time_t nanosec = 0;

    const char* data = mixedvalues.c_str();
    char *ep;

    hour = strtol(data, &ep, 10);
    if (!(!ep || *ep != ':')) {
        min = strtol(ep+1, &ep, 10);
        if (!(!ep || *ep != ':')) {
            sec = strtol(ep+1, &ep, 10);
            if (!(!ep || *ep != ':')) {    
                millisec = strtol(ep+1, &ep, 10);
                if (!(!ep || *ep != ':')) {
                    microsec = strtol(ep+1, &ep, 10);
                    if (!(!ep || *ep != ':')) {
                        nanosec = strtol(ep+1, &ep, 10);
                    }
                }
            }
        }
    }
    
    std::time_t calc_time = convertToNano(hour, min, sec, millisec, microsec, nanosec);

    if(time_stamp < calc_time){    
        long int numberOfSteps = calc_time / step_time;
        return numberOfSteps;
    }
    else{
        return -1;
    }
}

long int advanceToV2(std::time_t timer, std::time_t step_time, std::string unit, std::time_t value){

    std::time_t hour = 0;
    std::time_t min = 0;
    std::time_t sec = 0;
    std::time_t millisec = 0;
    std::time_t microsec = 0;
    std::time_t nanosec = 0;

    if(unit == "hour"){
        hour = value;
    }
    else if(unit == "min"){
        min = value;
    }
    else if(unit == "sec"){
        sec = value;
    }
    else if(unit == "millisec"){
        millisec = value;
    }
    else if(unit == "microsec"){
        microsec = value;
    }
    else if(unit == "nanosec"){
        nanosec = value;
    }

    std::time_t calc_time = convertToNano(hour, min, sec, millisec, microsec, nanosec);

    if(timer < calc_time){    
        long int numberOfSteps = calc_time / step_time;
        return numberOfSteps;
    }
    else{
        return -1;
    }
}

long int advanceOfV1(std::time_t step_time, std::string mixedvalues){
    
    std::time_t hour = 0;
    std::time_t min = 0;
    std::time_t sec = 0;
    std::time_t millisec = 0;
    std::time_t microsec = 0;
    std::time_t nanosec = 0;

    const char* data = mixedvalues.c_str();
    char *ep;

    hour = strtol(data, &ep, 10);
    if (!(!ep || *ep != ':')) {
        min = strtol(ep+1, &ep, 10);
        if (!(!ep || *ep != ':')) {
            sec = strtol(ep+1, &ep, 10);
            if (!(!ep || *ep != ':')) {    
                millisec = strtol(ep+1, &ep, 10);
                if (!(!ep || *ep != ':')) {
                    microsec = strtol(ep+1, &ep, 10);
                    if (!(!ep || *ep != ':')) {
                        nanosec = strtol(ep+1, &ep, 10);
                    }
                }
            }
        }
    }
    
    std::time_t calc_time = convertToNano(hour, min, sec, millisec, microsec, nanosec);

    long int numberOfSteps = calc_time / step_time;
    if(numberOfSteps > 0){    
        return numberOfSteps;
    }
    else{
        return -1;
    }

}

long int advanceOfV2(std::time_t step_time, std::string unit, std::time_t value){

    std::time_t hour = 0;
    std::time_t min = 0;
    std::time_t sec = 0;
    std::time_t millisec = 0;
    std::time_t microsec = 0;
    std::time_t nanosec = 0;

    if(unit == "hour"){
        hour = value;
    }
    else if(unit == "min"){
        min = value;
    }
    else if(unit == "sec"){
        sec = value;
    }
    else if(unit == "millisec"){
        millisec = value;
    }
    else if(unit == "microsec"){
        microsec = value;
    }
    else if(unit == "nanosec"){
        nanosec = value;
    }

    std::time_t calc_time = convertToNano(hour, min, sec, millisec, microsec, nanosec);

    long int numberOfSteps = calc_time / step_time;
    if(numberOfSteps > 0){    
        return numberOfSteps;
    }
    else{
        return -1;
    }
}