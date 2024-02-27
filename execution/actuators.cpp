#include "readConfig.h"
#include "helper.h"
#include <chrono>
#include <ctime>
#include "inttypes.h"
std::time_t  current_time = 0;
enum AutState
{
  S3,
  S0,
  S1,
  S2
};
enum KleeneState
{
  KLEENE_NOTSTARTED,
  KLEENE_STARTED
};
struct TState_GetVentilatorCurrentStatus
{
  AutState  autState;

};
struct TState_LoopGetVentilatorCurrentStatus
{
  KleeneState  kleeneState;
  TState_GetVentilatorCurrentStatus  ts_GetVentilatorCurrentStatus;

};
struct TState_GetBatteryPower
{
  AutState  autState;

};
struct TState_LoopGetBatteryPower
{
  KleeneState  kleeneState;
  TState_GetBatteryPower  ts_GetBatteryPower;

};
struct TState_Actuators_o10
{
  Timer left_clock_LoopGetBatteryPower = current_time;
  Timer right_clock_LoopGetVentilatorCurrentStatus = current_time;
  TState_LoopGetBatteryPower  ts_LoopGetBatteryPower;
  TState_LoopGetVentilatorCurrentStatus  ts_LoopGetVentilatorCurrentStatus;

};
struct TState_GetVtidal
{
  AutState  autState;

};
struct TState_LoopGetVtidal
{
  KleeneState  kleeneState;
  TState_GetVtidal  ts_GetVtidal;

};
struct TState_Actuators_o9
{
  Timer left_clock_LoopGetVtidal = current_time;
  Timer right_clock_Actuators_o10 = current_time;
  TState_LoopGetVtidal  ts_LoopGetVtidal;
  TState_Actuators_o10  ts_Actuators_o10;

};
struct TState_GetPeakPinsp
{
  AutState  autState;

};
struct TState_LoopGetPeakPinsp
{
  KleeneState  kleeneState;
  TState_GetPeakPinsp  ts_GetPeakPinsp;

};
struct TState_Actuators_o8
{
  Timer left_clock_LoopGetPeakPinsp = current_time;
  Timer right_clock_Actuators_o9 = current_time;
  TState_LoopGetPeakPinsp  ts_LoopGetPeakPinsp;
  TState_Actuators_o9  ts_Actuators_o9;

};
struct TState_GetRmTime
{
  AutState  autState;

};
struct TState_LoopGetRMTime
{
  KleeneState  kleeneState;
  TState_GetRmTime  ts_GetRmTime;

};
struct TState_Actuators_o7
{
  Timer left_clock_LoopGetRMTime = current_time;
  Timer right_clock_Actuators_o8 = current_time;
  TState_LoopGetRMTime  ts_LoopGetRMTime;
  TState_Actuators_o8  ts_Actuators_o8;

};
struct TState_GetPeep
{
  AutState  autState;

};
struct TState_LoopGetPeep
{
  KleeneState  kleeneState;
  TState_GetPeep  ts_GetPeep;

};
struct TState_Actuators_o6
{
  Timer right_clock_Actuators_o7 = current_time;
  Timer left_clock_LoopGetPeep = current_time;
  TState_LoopGetPeep  ts_LoopGetPeep;
  TState_Actuators_o7  ts_Actuators_o7;

};
struct TState_GetVe
{
  AutState  autState;

};
struct TState_LoopGetVE
{
  KleeneState  kleeneState;
  TState_GetVe  ts_GetVe;

};
struct TState_Actuators_o5
{
  Timer left_clock_LoopGetVE = current_time;
  Timer right_clock_Actuators_o6 = current_time;
  TState_LoopGetVE  ts_LoopGetVE;
  TState_Actuators_o6  ts_Actuators_o6;

};
struct TState_GetRR
{
  AutState  autState;

};
struct TState_LoopGetRR
{
  KleeneState  kleeneState;
  TState_GetRR  ts_GetRR;

};
struct TState_Actuators_o4
{
  Timer left_clock_LoopGetRR = current_time;
  Timer right_clock_Actuators_o5 = current_time;
  TState_LoopGetRR  ts_LoopGetRR;
  TState_Actuators_o5  ts_Actuators_o5;

};
struct TState_GetBatteryChargeLevel
{
  AutState  autState;

};
struct TState_LoopGetBatteryChargeLevel
{
  KleeneState  kleeneState;
  TState_GetBatteryChargeLevel  ts_GetBatteryChargeLevel;

};
struct TState_Actuators_o3
{
  Timer right_clock_Actuators_o4 = current_time;
  Timer left_clock_LoopGetBatteryChargeLevel = current_time;
  TState_LoopGetBatteryChargeLevel  ts_LoopGetBatteryChargeLevel;
  TState_Actuators_o4  ts_Actuators_o4;

};
struct TState_GetFiO2
{
  AutState  autState;

};
struct TState_LoopGetFiO2
{
  KleeneState  kleeneState;
  TState_GetFiO2  ts_GetFiO2;

};
struct TState_Actuators_o2
{
  Timer right_clock_Actuators_o3 = current_time;
  Timer left_clock_LoopGetFiO2 = current_time;
  TState_LoopGetFiO2  ts_LoopGetFiO2;
  TState_Actuators_o3  ts_Actuators_o3;

};
struct TState_GetTemperature
{
  AutState  autState;

};
struct TState_LoopGetTemperature
{
  KleeneState  kleeneState;
  TState_GetTemperature  ts_GetTemperature;

};
struct TState_Actuators_o1
{
  Timer right_clock_Actuators_o2 = current_time;
  Timer left_clock_LoopGetTemperature = current_time;
  TState_LoopGetTemperature  ts_LoopGetTemperature;
  TState_Actuators_o2  ts_Actuators_o2;

};
struct TState_GetPAW
{
  AutState  autState;

};
struct TState_LoopGetPAW
{
  KleeneState  kleeneState;
  TState_GetPAW  ts_GetPAW;

};
struct TState_Actuators
{
  float  peep;
  float  peak_pinsp;
  Parameters  parameters;
  float  fio2;
  float  ve;
  float  rr;
  bool  vtidal;
  std::string   mode;
  std::string   power_status;
  Timer left_clock_LoopGetPAW = current_time;
  Timer right_clock_Actuators_o1 = current_time;
  TState_LoopGetPAW  ts_LoopGetPAW;
  TState_Actuators_o1  ts_Actuators_o1;

};
const std::vector<AutState>  shallow_final_GetPAW = {S3};
const std::vector<AutState>  shallow_final_GetTemperature = {S2};
const std::vector<AutState>  shallow_final_GetFiO2 = {S2};
const std::vector<AutState>  shallow_final_GetBatteryChargeLevel = {S2};
const std::vector<AutState>  shallow_final_GetRR = {S2};
const std::vector<AutState>  shallow_final_GetVe = {S2};
const std::vector<AutState>  shallow_final_GetPeep = {S2};
const std::vector<AutState>  shallow_final_GetRmTime = {S2};
const std::vector<AutState>  shallow_final_GetPeakPinsp = {S2};
const std::vector<AutState>  shallow_final_GetVtidal = {S2};
const std::vector<AutState>  shallow_final_GetBatteryPower = {S2};
const std::vector<AutState>  shallow_final_GetVentilatorCurrentStatus = {S2};
TState_Actuators  ts_Actuators;
std::time_t  step_time = 1.0E8;
Timer  last_event_time = 0;

int    Step()
{
	int  exec = 0;
	current_time = step_time+current_time;
	if((((std::find(shallow_final_GetPAW.begin(), shallow_final_GetPAW.end(), ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState) !=shallow_final_GetPAW.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_LoopGetPAW.kleeneState) && S0 == S1) || ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState == S1))
	{
		if(((std::find(shallow_final_GetPAW.begin(), shallow_final_GetPAW.end(), ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState) !=shallow_final_GetPAW.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_LoopGetPAW.kleeneState) && S0 == S1))
		{
			ts_Actuators.ts_LoopGetPAW.kleeneState = KLEENE_STARTED;
			ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState = S0;
			if(ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState == S1)
			{
				cout << "PAW value = " <<  ts_Actuators.parameters.paw<<  endl;ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState = S3;
				exec = 1;
			
			}
			ts_Actuators.left_clock_LoopGetPAW.reset_clock(current_time);
		}else if(ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState == S1)
		{
			ts_Actuators.ts_LoopGetPAW.kleeneState = KLEENE_STARTED;
			if(ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState == S1)
			{
				cout << "PAW value = " <<  ts_Actuators.parameters.paw<<  endl;ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState = S3;
				exec = 1;
			
			}
			ts_Actuators.left_clock_LoopGetPAW.reset_clock(current_time);
		}
	
	}else if(((((std::find(shallow_final_GetTemperature.begin(), shallow_final_GetTemperature.end(), ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState) !=shallow_final_GetTemperature.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S1) || ((((std::find(shallow_final_GetFiO2.begin(), shallow_final_GetFiO2.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState) !=shallow_final_GetFiO2.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S1) || ((((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S1) || ((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S1) || ((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1) || ((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1) || ((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1) || ((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1) || ((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1))))))))))))
	{
		if((((std::find(shallow_final_GetTemperature.begin(), shallow_final_GetTemperature.end(), ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState) !=shallow_final_GetTemperature.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S1))
		{
			if(((std::find(shallow_final_GetTemperature.begin(), shallow_final_GetTemperature.end(), ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState) !=shallow_final_GetTemperature.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState) && S0 == S1))
			{
				ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState = KLEENE_STARTED;
				ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState = S0;
				if(ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S1)
				{
					cout << "Temperature value = " <<  ts_Actuators.parameters.temperature<<  endl;ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState = S2;
					exec = 1;
				
				}
				ts_Actuators.ts_Actuators_o1.left_clock_LoopGetTemperature.reset_clock(current_time);
			}else if(ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S1)
			{
				ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState = KLEENE_STARTED;
				if(ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S1)
				{
					cout << "Temperature value = " <<  ts_Actuators.parameters.temperature<<  endl;ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState = S2;
					exec = 1;
				
				}
				ts_Actuators.ts_Actuators_o1.left_clock_LoopGetTemperature.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}else if(((((std::find(shallow_final_GetFiO2.begin(), shallow_final_GetFiO2.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState) !=shallow_final_GetFiO2.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S1) || ((((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S1) || ((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S1) || ((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1) || ((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1) || ((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1) || ((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1) || ((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1)))))))))))
		{
			if((((std::find(shallow_final_GetFiO2.begin(), shallow_final_GetFiO2.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState) !=shallow_final_GetFiO2.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S1))
			{
				if(((std::find(shallow_final_GetFiO2.begin(), shallow_final_GetFiO2.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState) !=shallow_final_GetFiO2.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState) && S0 == S1))
				{
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState = KLEENE_STARTED;
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState = S0;
					if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S1)
					{
						cout << "FiO2 value = " <<  ts_Actuators.fio2<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState = S2;
						exec = 1;
					
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.left_clock_LoopGetFiO2.reset_clock(current_time);
				}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S1)
				{
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState = KLEENE_STARTED;
					if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S1)
					{
						cout << "FiO2 value = " <<  ts_Actuators.fio2<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState = S2;
						exec = 1;
					
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.left_clock_LoopGetFiO2.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}else if(((((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S1) || ((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S1) || ((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1) || ((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1) || ((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1) || ((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1) || ((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1))))))))))
			{
				if((((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S1))
				{
					if(((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S1))
					{
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState = KLEENE_STARTED;
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState = S0;
						if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S1)
						{
							cout << "Battery charge level value = " <<  ts_Actuators.parameters.battery_charge_level<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState = S2;
							exec = 1;
						
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.left_clock_LoopGetBatteryChargeLevel.reset_clock(current_time);
					}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S1)
					{
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState = KLEENE_STARTED;
						if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S1)
						{
							cout << "Battery charge level value = " <<  ts_Actuators.parameters.battery_charge_level<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState = S2;
							exec = 1;
						
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.left_clock_LoopGetBatteryChargeLevel.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}else if(((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S1) || ((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1) || ((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1) || ((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1) || ((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1) || ((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1)))))))))
				{
					if((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S1))
					{
						if(((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S1))
						{
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState = KLEENE_STARTED;
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState = S0;
							if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S1)
							{
								cout << "RR value = " <<  ts_Actuators.rr<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState = S2;
								exec = 1;
							
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.left_clock_LoopGetRR.reset_clock(current_time);
						}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S1)
						{
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState = KLEENE_STARTED;
							if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S1)
							{
								cout << "RR value = " <<  ts_Actuators.rr<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState = S2;
								exec = 1;
							
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.left_clock_LoopGetRR.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}else if(((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1) || ((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1) || ((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1) || ((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1) || ((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1))))))))
					{
						if((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1))
						{
							if(((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S1))
							{
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState = KLEENE_STARTED;
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState = S0;
								if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1)
								{
									cout << "VE value = " << ts_Actuators.ve<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState = S2;
									exec = 1;
								
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.left_clock_LoopGetVE.reset_clock(current_time);
							}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1)
							{
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState = KLEENE_STARTED;
								if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S1)
								{
									cout << "VE value = " << ts_Actuators.ve<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState = S2;
									exec = 1;
								
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.left_clock_LoopGetVE.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}else if(((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1) || ((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1) || ((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1) || ((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1)))))))
						{
							if((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1))
							{
								if(((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S1))
								{
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState = KLEENE_STARTED;
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState = S0;
									if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1)
									{
										cout << "PEEP value = " << ts_Actuators.peep<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState = S2;
										exec = 1;
									
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.left_clock_LoopGetPeep.reset_clock(current_time);
								}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1)
								{
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState = KLEENE_STARTED;
									if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S1)
									{
										cout << "PEEP value = " << ts_Actuators.peep<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState = S2;
										exec = 1;
									
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.left_clock_LoopGetPeep.reset_clock(current_time);
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
							}else if(((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1) || ((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1) || ((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1))))))
							{
								if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1))
								{
									if(((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S1))
									{
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState = KLEENE_STARTED;
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState = S0;
										if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1)
										{
											cout << "RM Time value = " <<  ts_Actuators.parameters.timer_rm<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState = S2;
											exec = 1;
										
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.left_clock_LoopGetRMTime.reset_clock(current_time);
									}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1)
									{
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState = KLEENE_STARTED;
										if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S1)
										{
											cout << "RM Time value = " <<  ts_Actuators.parameters.timer_rm<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState = S2;
											exec = 1;
										
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.left_clock_LoopGetRMTime.reset_clock(current_time);
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.right_clock_Actuators_o7.reset_clock(current_time);
								}else if(((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1) || ((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1)))))
								{
									if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1))
									{
										if(((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S1))
										{
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState = KLEENE_STARTED;
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState = S0;
											if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1)
											{
												cout << "Peak pinsp value = " << ts_Actuators.peak_pinsp<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState = S2;
												exec = 1;
											
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.left_clock_LoopGetPeakPinsp.reset_clock(current_time);
										}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1)
										{
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState = KLEENE_STARTED;
											if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S1)
											{
												cout << "Peak pinsp value = " << ts_Actuators.peak_pinsp<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState = S2;
												exec = 1;
											
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.left_clock_LoopGetPeakPinsp.reset_clock(current_time);
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.right_clock_Actuators_o8.reset_clock(current_time);
									}else if(((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1) || ((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1))))
									{
										if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1))
										{
											if(((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S1))
											{
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState = KLEENE_STARTED;
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState = S0;
												if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1)
												{
													cout << "Vtidal value = " <<  ts_Actuators.vtidal<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState = S2;
													exec = 1;
												
												}
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.left_clock_LoopGetVtidal.reset_clock(current_time);
											}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1)
											{
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState = KLEENE_STARTED;
												if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S1)
												{
													cout << "Vtidal value = " <<  ts_Actuators.vtidal<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState = S2;
													exec = 1;
												
												}
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.left_clock_LoopGetVtidal.reset_clock(current_time);
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.right_clock_Actuators_o9.reset_clock(current_time);
										}else if(((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1) || (((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1)))
										{
											if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1))
											{
												if(((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S1))
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState = KLEENE_STARTED;
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState = S0;
													if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1)
													{
														cout << "Power source value = " <<  ts_Actuators.parameters.power_supply<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState = S2;
														exec = 1;
													
													}
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.left_clock_LoopGetBatteryPower.reset_clock(current_time);
												}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1)
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState = KLEENE_STARTED;
													if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S1)
													{
														cout << "Power source value = " <<  ts_Actuators.parameters.power_supply<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState = S2;
														exec = 1;
													
													}
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.left_clock_LoopGetBatteryPower.reset_clock(current_time);
												}
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.right_clock_Actuators_o10.reset_clock(current_time);
											}else if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1))
											{
												if(((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S1))
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState = KLEENE_STARTED;
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState = S0;
													if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1)
													{
														
														string status = (ts_Actuators.power_status=="off")?"stopped,":"running,";
														cout << "Current Status value = " << status  <<ts_Actuators.mode<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState = S2;
														exec = 1;
													
													}
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.right_clock_LoopGetVentilatorCurrentStatus.reset_clock(current_time);
												}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1)
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState = KLEENE_STARTED;
													if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S1)
													{
														
														string status = (ts_Actuators.power_status=="off")?"stopped,":"running,";
														cout << "Current Status value = " << status  <<ts_Actuators.mode<<  endl;ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState = S2;
														exec = 1;
													
													}
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.right_clock_LoopGetVentilatorCurrentStatus.reset_clock(current_time);
												}
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.right_clock_Actuators_o10.reset_clock(current_time);
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.right_clock_Actuators_o9.reset_clock(current_time);
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.right_clock_Actuators_o8.reset_clock(current_time);
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.right_clock_Actuators_o7.reset_clock(current_time);
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_fio2()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetFiO2.begin(), shallow_final_GetFiO2.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState) !=shallow_final_GetFiO2.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S0))
	{
		if((((std::find(shallow_final_GetFiO2.begin(), shallow_final_GetFiO2.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState) !=shallow_final_GetFiO2.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S0))
		{
			if((((std::find(shallow_final_GetFiO2.begin(), shallow_final_GetFiO2.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState) !=shallow_final_GetFiO2.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S0))
			{
				if(((std::find(shallow_final_GetFiO2.begin(), shallow_final_GetFiO2.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState) !=shallow_final_GetFiO2.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState) && S0 == S0))
				{
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState = KLEENE_STARTED;
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState = S0;
					if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S0)
					{
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState = S1;
						exec = 1;
					
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.left_clock_LoopGetFiO2.reset_clock(current_time);
				}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S0)
				{
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState = KLEENE_STARTED;
					if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState == S0)
					{
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState = S1;
						exec = 1;
					
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.left_clock_LoopGetFiO2.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_timer_rm()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0))
	{
		if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0))
		{
			if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0))
			{
				if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0))
				{
					if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0))
					{
						if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0))
						{
							if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0))
							{
								if((((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0))
								{
									if(((std::find(shallow_final_GetRmTime.begin(), shallow_final_GetRmTime.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState) !=shallow_final_GetRmTime.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState) && S0 == S0))
									{
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState = KLEENE_STARTED;
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState = S0;
										if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0)
										{
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState = S1;
											exec = 1;
										
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.left_clock_LoopGetRMTime.reset_clock(current_time);
									}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0)
									{
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState = KLEENE_STARTED;
										if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState == S0)
										{
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState = S1;
											exec = 1;
										
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.left_clock_LoopGetRMTime.reset_clock(current_time);
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.right_clock_Actuators_o7.reset_clock(current_time);
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_peep()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0))
	{
		if((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0))
		{
			if((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0))
			{
				if((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0))
				{
					if((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0))
					{
						if((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0))
						{
							if((((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0))
							{
								if(((std::find(shallow_final_GetPeep.begin(), shallow_final_GetPeep.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState) !=shallow_final_GetPeep.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState) && S0 == S0))
								{
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState = KLEENE_STARTED;
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState = S0;
									if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0)
									{
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState = S1;
										exec = 1;
									
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.left_clock_LoopGetPeep.reset_clock(current_time);
								}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0)
								{
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState = KLEENE_STARTED;
									if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState == S0)
									{
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState = S1;
										exec = 1;
									
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.left_clock_LoopGetPeep.reset_clock(current_time);
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_peak_pinsp()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
	{
		if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
		{
			if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
			{
				if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
				{
					if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
					{
						if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
						{
							if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
							{
								if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
								{
									if((((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0))
									{
										if(((std::find(shallow_final_GetPeakPinsp.begin(), shallow_final_GetPeakPinsp.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState) !=shallow_final_GetPeakPinsp.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState) && S0 == S0))
										{
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState = KLEENE_STARTED;
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState = S0;
											if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0)
											{
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState = S1;
												exec = 1;
											
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.left_clock_LoopGetPeakPinsp.reset_clock(current_time);
										}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0)
										{
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState = KLEENE_STARTED;
											if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState == S0)
											{
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState = S1;
												exec = 1;
											
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.left_clock_LoopGetPeakPinsp.reset_clock(current_time);
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.right_clock_Actuators_o8.reset_clock(current_time);
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.right_clock_Actuators_o7.reset_clock(current_time);
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_rr()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S0))
	{
		if((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S0))
		{
			if((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S0))
			{
				if((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S0))
				{
					if((((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S0))
					{
						if(((std::find(shallow_final_GetRR.begin(), shallow_final_GetRR.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState) !=shallow_final_GetRR.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState) && S0 == S0))
						{
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState = KLEENE_STARTED;
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState = S0;
							if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S0)
							{
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState = S1;
								exec = 1;
							
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.left_clock_LoopGetRR.reset_clock(current_time);
						}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S0)
						{
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState = KLEENE_STARTED;
							if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState == S0)
							{
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState = S1;
								exec = 1;
							
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.left_clock_LoopGetRR.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_temperature()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetTemperature.begin(), shallow_final_GetTemperature.end(), ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState) !=shallow_final_GetTemperature.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S0))
	{
		if((((std::find(shallow_final_GetTemperature.begin(), shallow_final_GetTemperature.end(), ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState) !=shallow_final_GetTemperature.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S0))
		{
			if(((std::find(shallow_final_GetTemperature.begin(), shallow_final_GetTemperature.end(), ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState) !=shallow_final_GetTemperature.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState) && S0 == S0))
			{
				ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState = KLEENE_STARTED;
				ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState = S0;
				if(ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S0)
				{
					ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState = S1;
					exec = 1;
				
				}
				ts_Actuators.ts_Actuators_o1.left_clock_LoopGetTemperature.reset_clock(current_time);
			}else if(ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S0)
			{
				ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState = KLEENE_STARTED;
				if(ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState == S0)
				{
					ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState = S1;
					exec = 1;
				
				}
				ts_Actuators.ts_Actuators_o1.left_clock_LoopGetTemperature.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_ve()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0))
	{
		if((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0))
		{
			if((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0))
			{
				if((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0))
				{
					if((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0))
					{
						if((((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0))
						{
							if(((std::find(shallow_final_GetVe.begin(), shallow_final_GetVe.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState) !=shallow_final_GetVe.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState) && S0 == S0))
							{
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState = KLEENE_STARTED;
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState = S0;
								if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0)
								{
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState = S1;
									exec = 1;
								
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.left_clock_LoopGetVE.reset_clock(current_time);
							}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0)
							{
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState = KLEENE_STARTED;
								if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState == S0)
								{
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState = S1;
									exec = 1;
								
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.left_clock_LoopGetVE.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_paw()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetPAW.begin(), shallow_final_GetPAW.end(), ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState) !=shallow_final_GetPAW.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_LoopGetPAW.kleeneState) && S0 == S0) || ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState == S0))
	{
		if(((std::find(shallow_final_GetPAW.begin(), shallow_final_GetPAW.end(), ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState) !=shallow_final_GetPAW.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_LoopGetPAW.kleeneState) && S0 == S0))
		{
			ts_Actuators.ts_LoopGetPAW.kleeneState = KLEENE_STARTED;
			ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState = S0;
			if(ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState == S0)
			{
				ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState = S1;
				exec = 1;
			
			}
			ts_Actuators.left_clock_LoopGetPAW.reset_clock(current_time);
		}else if(ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState == S0)
		{
			ts_Actuators.ts_LoopGetPAW.kleeneState = KLEENE_STARTED;
			if(ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState == S0)
			{
				ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState = S1;
				exec = 1;
			
			}
			ts_Actuators.left_clock_LoopGetPAW.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_vtidal()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
	{
		if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
		{
			if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
			{
				if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
				{
					if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
					{
						if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
						{
							if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
							{
								if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
								{
									if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
									{
										if((((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0))
										{
											if(((std::find(shallow_final_GetVtidal.begin(), shallow_final_GetVtidal.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState) !=shallow_final_GetVtidal.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState) && S0 == S0))
											{
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState = KLEENE_STARTED;
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState = S0;
												if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0)
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState = S1;
													exec = 1;
												
												}
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.left_clock_LoopGetVtidal.reset_clock(current_time);
											}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0)
											{
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState = KLEENE_STARTED;
												if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState == S0)
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState = S1;
													exec = 1;
												
												}
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.left_clock_LoopGetVtidal.reset_clock(current_time);
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.right_clock_Actuators_o9.reset_clock(current_time);
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.right_clock_Actuators_o8.reset_clock(current_time);
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.right_clock_Actuators_o7.reset_clock(current_time);
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_battery_charge_level()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S0))
	{
		if((((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S0))
		{
			if((((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S0))
			{
				if((((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S0))
				{
					if(((std::find(shallow_final_GetBatteryChargeLevel.begin(), shallow_final_GetBatteryChargeLevel.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState) !=shallow_final_GetBatteryChargeLevel.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState) && S0 == S0))
					{
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState = KLEENE_STARTED;
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState = S0;
						if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S0)
						{
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState = S1;
							exec = 1;
						
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.left_clock_LoopGetBatteryChargeLevel.reset_clock(current_time);
					}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S0)
					{
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState = KLEENE_STARTED;
						if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState == S0)
						{
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState = S1;
							exec = 1;
						
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.left_clock_LoopGetBatteryChargeLevel.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_battery_power()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
	{
		if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
		{
			if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
			{
				if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
				{
					if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
					{
						if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
						{
							if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
							{
								if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
								{
									if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
									{
										if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
										{
											if((((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0))
											{
												if(((std::find(shallow_final_GetBatteryPower.begin(), shallow_final_GetBatteryPower.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState) !=shallow_final_GetBatteryPower.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState) && S0 == S0))
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState = KLEENE_STARTED;
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState = S0;
													if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0)
													{
														ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState = S1;
														exec = 1;
													
													}
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.left_clock_LoopGetBatteryPower.reset_clock(current_time);
												}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0)
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState = KLEENE_STARTED;
													if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState == S0)
													{
														ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState = S1;
														exec = 1;
													
													}
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.left_clock_LoopGetBatteryPower.reset_clock(current_time);
												}
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.right_clock_Actuators_o10.reset_clock(current_time);
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.right_clock_Actuators_o9.reset_clock(current_time);
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.right_clock_Actuators_o8.reset_clock(current_time);
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.right_clock_Actuators_o7.reset_clock(current_time);
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_current_status()
{
	int  exec = 0;
	if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
	{
		if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
		{
			if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
			{
				if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
				{
					if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
					{
						if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
						{
							if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
							{
								if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
								{
									if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
									{
										if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
										{
											if((((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0) || ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0))
											{
												if(((std::find(shallow_final_GetVentilatorCurrentStatus.begin(), shallow_final_GetVentilatorCurrentStatus.end(), ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState) !=shallow_final_GetVentilatorCurrentStatus.end() || KLEENE_NOTSTARTED == ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState) && S0 == S0))
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState = KLEENE_STARTED;
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState = S0;
													if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0)
													{
														ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState = S1;
														exec = 1;
													
													}
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.right_clock_LoopGetVentilatorCurrentStatus.reset_clock(current_time);
												}else if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0)
												{
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState = KLEENE_STARTED;
													if(ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState == S0)
													{
														ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState = S1;
														exec = 1;
													
													}
													ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.right_clock_LoopGetVentilatorCurrentStatus.reset_clock(current_time);
												}
												ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.right_clock_Actuators_o10.reset_clock(current_time);
											}
											ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.right_clock_Actuators_o9.reset_clock(current_time);
										}
										ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.right_clock_Actuators_o8.reset_clock(current_time);
									}
									ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.right_clock_Actuators_o7.reset_clock(current_time);
								}
								ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
							}
							ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
						}
						ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
					}
					ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
				}
				ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
			}
			ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}
int main(int argc, char** argv)
{
	IO::configInputStream(argc, argv);
	ts_Actuators.peep = peep;
	ts_Actuators.peak_pinsp = peak_pinsp;
	ts_Actuators.parameters = parameters;
	ts_Actuators.fio2 = fio2;
	ts_Actuators.ve = ve;
	ts_Actuators.rr = rr;
	ts_Actuators.vtidal = vtidal;
	ts_Actuators.mode = "mode";
	ts_Actuators.power_status = "power_status";
	ts_Actuators.left_clock_LoopGetPAW.reset_clock(current_time);
	ts_Actuators.right_clock_Actuators_o1.reset_clock(current_time);
	ts_Actuators.ts_LoopGetPAW.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_LoopGetPAW.ts_GetPAW.autState = S0;
	ts_Actuators.ts_Actuators_o1.right_clock_Actuators_o2.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.left_clock_LoopGetTemperature.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_LoopGetTemperature.ts_GetTemperature.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.right_clock_Actuators_o3.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.left_clock_LoopGetFiO2.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_LoopGetFiO2.ts_GetFiO2.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.right_clock_Actuators_o4.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.left_clock_LoopGetBatteryChargeLevel.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_LoopGetBatteryChargeLevel.ts_GetBatteryChargeLevel.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.left_clock_LoopGetRR.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.right_clock_Actuators_o5.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_LoopGetRR.ts_GetRR.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.left_clock_LoopGetVE.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.right_clock_Actuators_o6.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_LoopGetVE.ts_GetVe.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.right_clock_Actuators_o7.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.left_clock_LoopGetPeep.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_LoopGetPeep.ts_GetPeep.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.left_clock_LoopGetRMTime.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.right_clock_Actuators_o8.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_LoopGetRMTime.ts_GetRmTime.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.left_clock_LoopGetPeakPinsp.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.right_clock_Actuators_o9.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_LoopGetPeakPinsp.ts_GetPeakPinsp.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.left_clock_LoopGetVtidal.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.right_clock_Actuators_o10.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_LoopGetVtidal.ts_GetVtidal.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.left_clock_LoopGetBatteryPower.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.right_clock_LoopGetVentilatorCurrentStatus.reset_clock(current_time);
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetBatteryPower.ts_GetBatteryPower.autState = S0;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.kleeneState = KLEENE_NOTSTARTED;
	ts_Actuators.ts_Actuators_o1.ts_Actuators_o2.ts_Actuators_o3.ts_Actuators_o4.ts_Actuators_o5.ts_Actuators_o6.ts_Actuators_o7.ts_Actuators_o8.ts_Actuators_o9.ts_Actuators_o10.ts_LoopGetVentilatorCurrentStatus.ts_GetVentilatorCurrentStatus.autState = S0;
	while (1)
	{
		Event  _evt = IO::read_event(argc);
		if(_evt.label.empty())
		{
			break;
		
		}else if(_evt.label.compare("Step") == 0)
		{
			if(Step())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_fio2") == 0)
		{
			if(get_fio2())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_timer_rm") == 0)
		{
			if(get_timer_rm())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_peep") == 0)
		{
			if(get_peep())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_peak_pinsp") == 0)
		{
			if(get_peak_pinsp())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_rr") == 0)
		{
			if(get_rr())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_temperature") == 0)
		{
			if(get_temperature())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_ve") == 0)
		{
			if(get_ve())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_paw") == 0)
		{
			if(get_paw())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_vtidal") == 0)
		{
			if(get_vtidal())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_battery_charge_level") == 0)
		{
			if(get_battery_charge_level())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_battery_power") == 0)
		{
			if(get_battery_power())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_current_status") == 0)
		{
			if(get_current_status())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("advanceTo") == 0){
			if(Types::get_str(_evt.params[0]).find(":") != std::string::npos){
				long int numberOfSteps = advanceToV1(current_time, step_time, Types::get_str(_evt.params[0]));
				while (numberOfSteps > 0)
				{
					Step();
					numberOfSteps--;
				}
			}
			else{
				bool flag = 0;
				long int numberOfSteps = advanceToV2(current_time, step_time, Types::get_str(_evt.params[0]), (std::time_t) Types::get_double(_evt.params[1], flag));
				while (numberOfSteps > 0)
				{
					Step();
					numberOfSteps--;
				}
			}
		}else if(_evt.label.compare("advanceOf") == 0){
			if(Types::get_str(_evt.params[0]).find(":") != std::string::npos){
				long int numberOfSteps = advanceOfV1(step_time, Types::get_str(_evt.params[0]));
				while (numberOfSteps > 0)
				{
					Step();
					numberOfSteps--;
				}
			}
			else{
				bool flag = 0;
				long int numberOfSteps = advanceOfV2(step_time, Types::get_str(_evt.params[0]), (std::time_t) Types::get_double(_evt.params[1], flag));
				while (numberOfSteps > 0)
				{
					Step();
					numberOfSteps--;
				}
			}	
		}
		else 
		{
			ERROR_1;
		
		}
	
	}
	return 0;

}
