


#ifndef READCONFIG_H
#define READCONFIG_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstring>

using namespace std;

typedef struct Parameters
{
    /* data */
    float rr_pcv; // Respiratory rate RRPCV in b/min
    float ie_pcv; // I:E Ratio I:E PCV
    float pinsp_pcv; // Target inspiratory pressure (Pinsp_PCV) in cm H2O
    string power_supply; //internal or external
    string in_valve;
    string out_valve;
    bool start_pcv;
    bool start_psv;
    float ets;
    bool inspiratory_pause_on;
    bool inspiratory_pause_off;
    bool expiratory_pause_on;
    bool expiratory_pause_off;
    bool recruitment_maneuver_on;
    bool recruitment_maneuver_off;
    float max_rm_time;
    float max_ins_pause;
    float paw;
    float its_pcv;
    float its_psv;
    float drop_paw;
    float max_exp_pause;
    float max_pinsp;
    float peak_pinsp_psv;
    float peak_pinsp_pcv;
    float pinsp_psv;
    float max_insp_time_psv = 7.0;
    float apnea_lag = 30;
    float rr_ap;
    float pinsp_ap;
    float ie_ap;
    float min_pinsp;
    float min_peep=0;
    float max_peep=3;
    float max_vtidal_exp=990;
    float min_vtidal_exp=10;
    float max_vtidal_insp=990;
    float min_vtidal_insp=10;
    float min_ve=2;
    float max_ve=80;
    float min_rr=4;
    float max_rr=50;
    float prm=20;
    float timer_rm=10;
    float trigger_window_delay = 0.7;
    float battery_charge_level;
    float temperature;
    float fan_tachometer;
    float ps_ins;
    float gas_pressure;
    float ps_exp;
    float fi2;
    float fio2=21;
    float oxygen_sensor;
    float fi1;
    float rr;

    Parameters& operator=(const Parameters& other)
    {
        if (this != &other)
        {
            rr_pcv = other.rr_pcv;
            ie_pcv = other.ie_pcv;
            pinsp_pcv = other.pinsp_pcv;
            power_supply = other.power_supply;
            in_valve = other.in_valve;
            out_valve = other.out_valve;
            start_pcv = other.start_pcv;
            start_psv = other.start_psv;
            inspiratory_pause_off = other.inspiratory_pause_off;
            inspiratory_pause_on = other.inspiratory_pause_on;
            expiratory_pause_on = other.expiratory_pause_on;
            expiratory_pause_off = other.expiratory_pause_off;
            recruitment_maneuver_off = other.recruitment_maneuver_off;
            recruitment_maneuver_on = other.recruitment_maneuver_on;
            max_rm_time = other.max_rm_time;
            ets = other.ets;
            max_ins_pause = other.max_ins_pause;
            paw = other.paw;
            its_pcv = other.its_pcv;
            its_psv = other.its_psv;
            drop_paw = other.drop_paw;
            max_exp_pause = other.max_exp_pause;
            max_pinsp = other.max_pinsp;
            peak_pinsp_pcv = other.peak_pinsp_pcv;
            peak_pinsp_psv = other.peak_pinsp_psv;
            pinsp_psv = other.pinsp_psv;
            max_insp_time_psv = other.max_insp_time_psv;
            apnea_lag = other.apnea_lag;
        }
        return *this;
    }

};

void match_field(Parameters& params, string field_name, string value) {
    if (field_name == "rr_pcv") {
        params.rr_pcv = stof(value);
    }
    else if (field_name == "ie_pcv") {
        params.ie_pcv =stof(value);
    }
    else if (field_name == "ie_ap") {
        params.ie_ap = stof(value);
    }
    else if (field_name == "pinsp_pcv") {
        params.pinsp_pcv = stof(value);
    }
    else if (field_name == "power_supply") {
        params.power_supply = value;
    }
    else if (field_name == "in_valve") {
        params.in_valve = value;
    }
    else if (field_name == "out_valve") {
        params.in_valve = value;
    }
    else if (field_name == "start_pcv") {
        params.start_pcv = value=="true";
    }
    else if (field_name == "start_psv") {
        params.start_psv = value == "true";
    }
    else if (field_name == "inspiratory_pause_on") {
        params.inspiratory_pause_on = value == "true";
    }
    else if (field_name == "inspiratory_pause_off") {
        params.inspiratory_pause_off = value == "true";
    }
    else if (field_name == "expiratory_pause_on") {
        params.expiratory_pause_on = value == "true";
    }
    else if (field_name == "expiratory_pause_off") {
        params.expiratory_pause_off = value == "true";
    }
    else if (field_name == "recruitment_maneuver_on") {
        params.recruitment_maneuver_on = value == "true";
    }
    else if (field_name == "recruitment_maneuver_off") {
        params.recruitment_maneuver_off = value == "true";
    }
    else if (field_name == "max_rm_time") {
        params.max_rm_time = stof(value);
    }
    else if (field_name == "ets") {
        params.ets = stof(value);
    }
    else if (field_name == "max_ins_pause") {
        params.max_ins_pause = stof(value);
    }
    else if (field_name == "paw") {
        params.paw = stof(value);
    }
    else if (field_name == "its_pcv") {
        params.its_pcv = stof(value);
    }
    else if (field_name == "its_psv") {
        params.its_psv = stof(value);
    }
    else if (field_name == "drop_paw") {
        params.drop_paw = stof(value);
    }
    else if (field_name == "max_exp_pause") {
        params.max_exp_pause = stof(value);
    }
    else if (field_name == "max_pinsp") {
        params.max_pinsp = stof(value);
    }
    else if (field_name == "peak_pinsp_psv") {
        params.peak_pinsp_psv = stof(value);
    }
    else if (field_name == "peak_pinsp_pcv") {
        params.peak_pinsp_pcv = stof(value);
    }
    else if (field_name == "pinsp_psv") {
        params.pinsp_psv = stof(value);
    }
    else if (field_name == "max_insp_time_psv") {
        params.max_insp_time_psv = stof(value);
    }
    else if (field_name == "apnea_lag") {
        params.apnea_lag = stof(value);
    }
}

Parameters read_config(string filename, string& status) {
    string line;
    Parameters params;
    vector<string> lines;
    size_t pos;
    string field_name;
    string field_value;
    cout << "Start ReadFile - '" << filename << "'" << endl;
    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '" << filename << "'" << endl;
        cout << "Could not open the file - '" << filename << "'" << endl;
        status="error";
        return params;
    }

    try{
        while (getline(input_file, line)) {
            pos = line.find(" ");
            field_name = line.substr(0, pos);
            line.erase(0, pos + 1);
            match_field(params, field_name, line);
            lines.push_back(line);
        }
    }catch(const exception& exc){
        cout << "Could not open the file - '" << filename << "'" << endl;
        status = "error";
        return params;
    }
    cout << "Success ReadFile - '" << filename << "'" <<status << endl;
    status="success";
    return params;
}

void save_config(string filename, Parameters& parameters) {
    string line;
    string status="success";
    cout << "Success ReadFile - '" << filename << "'" <<status << endl;
    status="success";

    // Write to the file
    ofstream MyFile(filename);
    MyFile << "rr_pcv "<< parameters.rr_pcv<< endl;
    MyFile << "ie_pcv "<< parameters.ie_pcv<< endl;
    MyFile << "pinsp_pcv "<< parameters.rr_pcv<< endl;
    MyFile << "its_pcv "<< parameters.its_pcv<< endl;
    MyFile << "pinsp_psv "<< parameters.pinsp_psv<< endl;
    MyFile << "its_psv "<< parameters.its_psv<< endl;
    MyFile << "ets "<< parameters.ets<< endl;
    MyFile << "apnea_lag "<< parameters.apnea_lag<< endl;
    MyFile << "rr_ap "<< parameters.rr_ap<< endl;
    MyFile << "ie_ap "<< parameters.ie_ap<< endl;
    MyFile << "pinsp_ap "<< parameters.pinsp_ap<< endl;
    MyFile << "max_pinsp "<< parameters.max_pinsp<< endl;
    MyFile << "min_pinsp "<< parameters.min_pinsp<< endl;
    MyFile << "max_vtidal_exp "<< parameters.max_vtidal_exp<< endl;
    MyFile << "min_vtidal_exp "<< parameters.min_vtidal_exp<< endl;
    MyFile << "max_vtidal_insp "<< parameters.max_vtidal_insp<< endl;
    MyFile << "min_vtidal_insp "<< parameters.min_vtidal_insp<< endl;
    MyFile << "min_ve "<< parameters.min_ve<< endl;
    MyFile << "max_ve "<< parameters.max_ve<< endl;
    MyFile << "min_rr "<< parameters.min_rr<< endl;
    MyFile << "max_rr "<< parameters.max_rr<< endl;
    MyFile << "min_peep "<< parameters.min_peep<< endl;
    MyFile << "max_peep "<< parameters.max_peep<< endl;
    MyFile << "timer_rm "<< parameters.timer_rm<< endl;
    MyFile << "prm "<< parameters.prm<< endl;
    MyFile << "max_ins_pause "<< parameters.max_ins_pause<< endl;
    MyFile << "max_exp_pause "<< parameters.max_exp_pause<< endl;
    MyFile << "trigger_window_delay "<< parameters.trigger_window_delay<< endl;
    MyFile << "max_insp_time_psv "<< parameters.max_insp_time_psv<< endl;

    // Close the file
    MyFile.close();
}

#endif
