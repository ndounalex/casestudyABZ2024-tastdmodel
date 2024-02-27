#include "readConfig.h"
#include "helper.h"
#include <chrono>
#include <ctime>
#include "inttypes.h"
std::time_t  current_time = 0;
enum CallState
{
  NOTCALLED,
  CALLED
};
enum AutState
{
  CallOxygenSensorFailSafe,
  CallExpiratoryValveFailSafe,
  CallUnacceptableLeaksFailSafe,
  S0,
  CallLocalAlarmsFailSafe,
  S1,
  CallFlowMeterFailSafe
};
struct TState_FailSafe
{
  AutState  autState;

};
struct TState_CallFlowMeterFailSafe
{
  CallState  callState;
  TState_FailSafe  ts_FailSafe;

};
struct TState_SelfTestFlowMeter
{
  AutState  autState;
  TState_CallFlowMeterFailSafe  ts_CallFlowMeterFailSafe;

};
struct TState_CallLocalAlarmsFailSafe
{
  CallState  callState;
  TState_FailSafe  ts_FailSafe;

};
struct TState_SelfTestLocalAlarm
{
  AutState  autState;
  TState_CallLocalAlarmsFailSafe  ts_CallLocalAlarmsFailSafe;

};
struct TState_SelfTest_o4
{
  Timer left_clock_SelfTestLocalAlarm = current_time;
  Timer right_clock_SelfTestFlowMeter = current_time;
  TState_SelfTestLocalAlarm  ts_SelfTestLocalAlarm;
  TState_SelfTestFlowMeter  ts_SelfTestFlowMeter;

};
struct TState_CallOxygenSensorFailSafe
{
  CallState  callState;
  TState_FailSafe  ts_FailSafe;

};
struct TState_SelfTestOxygenSensor
{
  AutState  autState;
  TState_CallOxygenSensorFailSafe  ts_CallOxygenSensorFailSafe;

};
struct TState_SelfTest_o3
{
  Timer left_clock_SelfTestOxygenSensor = current_time;
  Timer right_clock_SelfTest_o4 = current_time;
  TState_SelfTestOxygenSensor  ts_SelfTestOxygenSensor;
  TState_SelfTest_o4  ts_SelfTest_o4;

};
struct TState_CallExpiratoryValveFailSafe
{
  CallState  callState;
  TState_FailSafe  ts_FailSafe;

};
struct TState_SelfTestExpiratoryValve
{
  AutState  autState;
  TState_CallExpiratoryValveFailSafe  ts_CallExpiratoryValveFailSafe;

};
struct TState_SelfTest_o2
{
  Timer left_clock_SelfTestExpiratoryValve = current_time;
  Timer right_clock_SelfTest_o3 = current_time;
  TState_SelfTestExpiratoryValve  ts_SelfTestExpiratoryValve;
  TState_SelfTest_o3  ts_SelfTest_o3;

};
struct TState_CallUnacceptableLeaksFailSafe
{
  CallState  callState;
  TState_FailSafe  ts_FailSafe;

};
struct TState_SelfTestUnacceptableLeaks
{
  AutState  autState;
  TState_CallUnacceptableLeaksFailSafe  ts_CallUnacceptableLeaksFailSafe;

};
struct TState_SelfTest_o1
{
  Timer left_clock_SelfTestUnacceptableLeaks = current_time;
  Timer right_clock_SelfTest_o2 = current_time;
  TState_SelfTestUnacceptableLeaks  ts_SelfTestUnacceptableLeaks;
  TState_SelfTest_o2  ts_SelfTest_o2;

};
struct TState_SwitchOverFromExternalInternal
{
  AutState  autState;

};
struct TState_SelfTest
{
  Parameters  parameters;
  Timer left_clock_SwitchOverFromExternalInternal = current_time;
  Timer right_clock_SelfTest_o1 = current_time;
  TState_SwitchOverFromExternalInternal  ts_SwitchOverFromExternalInternal;
  TState_SelfTest_o1  ts_SelfTest_o1;

};
const std::vector<AutState>  shallow_final_SwitchOverFromExternalInternal = {S1};
const std::vector<AutState>  shallow_final_SelfTestUnacceptableLeaks = {S1};
const std::vector<AutState>  deep_final_SelfTestUnacceptableLeaks = {CallUnacceptableLeaksFailSafe};
const std::vector<AutState>  shallow_final_SelfTestExpiratoryValve = {S1};
const std::vector<AutState>  deep_final_SelfTestExpiratoryValve = {CallExpiratoryValveFailSafe};
const std::vector<AutState>  shallow_final_SelfTestOxygenSensor = {S1};
const std::vector<AutState>  deep_final_SelfTestOxygenSensor = {CallOxygenSensorFailSafe};
const std::vector<AutState>  shallow_final_SelfTestLocalAlarm = {S1};
const std::vector<AutState>  deep_final_SelfTestLocalAlarm = {CallLocalAlarmsFailSafe};
const std::vector<AutState>  shallow_final_SelfTestFlowMeter = {S1};
const std::vector<AutState>  deep_final_SelfTestFlowMeter = {CallFlowMeterFailSafe};
TState_SelfTest  ts_SelfTest;
std::time_t  step_time = 1.0E8;
Timer  last_event_time = 0;

int    Step()
{
	int  exec = 0;
	current_time = step_time+current_time;
	if((ts_SelfTest.ts_SwitchOverFromExternalInternal.autState == S0 && ts_SelfTest.parameters.power_supply == "internal" ))
	{
		if((ts_SelfTest.ts_SwitchOverFromExternalInternal.autState == S0 && ts_SelfTest.parameters.power_supply == "internal" ))
		{
			ts_SelfTest.left_clock_SwitchOverFromExternalInternal.reset_clock(current_time);ts_SelfTest.ts_SwitchOverFromExternalInternal.autState = S1;
			exec = 1;
		
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_OS()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
			{
				if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
				{
					if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
					{
						ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.left_clock_SelfTestOxygenSensor.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState = S1;
						exec = 1;
					
					}
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.right_clock_SelfTest_o3.reset_clock(current_time);
				}
				ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    functional_local_alarms()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
			{
				if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
				{
					if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
					{
						if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
						{
							ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.left_clock_SelfTestLocalAlarm.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState = S1;
							exec = 1;
						
						}
						ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.right_clock_SelfTest_o4.reset_clock(current_time);
					}
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.right_clock_SelfTest_o3.reset_clock(current_time);
				}
				ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    no_unacceptable_leaks()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState == S0)
			{
				ts_SelfTest.ts_SelfTest_o1.left_clock_SelfTestUnacceptableLeaks.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState = S1;
				exec = 1;
			
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    no_calibrate_OS()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
			{
				if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
				{
					if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState == S0)
					{
						ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.left_clock_SelfTestOxygenSensor.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState = CallOxygenSensorFailSafe;
						ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.ts_CallOxygenSensorFailSafe.callState = NOTCALLED;
						exec = 1;
					
					}
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.right_clock_SelfTest_o3.reset_clock(current_time);
				}
				ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    no_functional_local_alarms()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
			{
				if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
				{
					if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
					{
						if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState == S0)
						{
							ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.left_clock_SelfTestLocalAlarm.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState = CallLocalAlarmsFailSafe;
							ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.ts_CallLocalAlarmsFailSafe.callState = NOTCALLED;
							exec = 1;
						
						}
						ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.right_clock_SelfTest_o4.reset_clock(current_time);
					}
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.right_clock_SelfTest_o3.reset_clock(current_time);
				}
				ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    no_functional_ps_exp()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState == S0)
			{
				if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState == S0)
				{
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.left_clock_SelfTestExpiratoryValve.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState = CallExpiratoryValveFailSafe;
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.ts_CallExpiratoryValveFailSafe.callState = NOTCALLED;
					exec = 1;
				
				}
				ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_fi2()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
			{
				if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
				{
					if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
					{
						if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
						{
							ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.right_clock_SelfTestFlowMeter.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState = S1;
							exec = 1;
						
						}
						ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.right_clock_SelfTest_o4.reset_clock(current_time);
					}
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.right_clock_SelfTest_o3.reset_clock(current_time);
				}
				ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    unacceptable_leaks()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState == S0)
			{
				ts_SelfTest.ts_SelfTest_o1.left_clock_SelfTestUnacceptableLeaks.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState = CallUnacceptableLeaksFailSafe;
				ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.ts_CallUnacceptableLeaksFailSafe.callState = NOTCALLED;
				exec = 1;
			
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    get_ps_exp()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState == S0)
			{
				if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState == S0)
				{
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.left_clock_SelfTestExpiratoryValve.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState = S1;
					exec = 1;
				
				}
				ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    no_connected_or_calibrated()
{
	int  exec = 0;
	if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
	{
		if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
		{
			if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
			{
				if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
				{
					if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
					{
						if(ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState == S0)
						{
							ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.right_clock_SelfTestFlowMeter.reset_clock(current_time);ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState = CallFlowMeterFailSafe;
							ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.ts_CallFlowMeterFailSafe.callState = NOTCALLED;
							exec = 1;
						
						}
						ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.right_clock_SelfTest_o4.reset_clock(current_time);
					}
					ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.right_clock_SelfTest_o3.reset_clock(current_time);
				}
				ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
			}
			ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
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
	ts_SelfTest.parameters = parameters;
	ts_SelfTest.left_clock_SwitchOverFromExternalInternal.reset_clock(current_time);
	ts_SelfTest.right_clock_SelfTest_o1.reset_clock(current_time);
	ts_SelfTest.ts_SwitchOverFromExternalInternal.autState = S0;
	ts_SelfTest.ts_SelfTest_o1.left_clock_SelfTestUnacceptableLeaks.reset_clock(current_time);
	ts_SelfTest.ts_SelfTest_o1.right_clock_SelfTest_o2.reset_clock(current_time);
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTestUnacceptableLeaks.autState = S0;
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.left_clock_SelfTestExpiratoryValve.reset_clock(current_time);
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.right_clock_SelfTest_o3.reset_clock(current_time);
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTestExpiratoryValve.autState = S0;
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.left_clock_SelfTestOxygenSensor.reset_clock(current_time);
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.right_clock_SelfTest_o4.reset_clock(current_time);
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTestOxygenSensor.autState = S0;
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.left_clock_SelfTestLocalAlarm.reset_clock(current_time);
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.right_clock_SelfTestFlowMeter.reset_clock(current_time);
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestLocalAlarm.autState = S0;
	ts_SelfTest.ts_SelfTest_o1.ts_SelfTest_o2.ts_SelfTest_o3.ts_SelfTest_o4.ts_SelfTestFlowMeter.autState = S0;
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
		
		}else if(_evt.label.compare("get_OS") == 0)
		{
			if(get_OS())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("functional_local_alarms") == 0)
		{
			if(functional_local_alarms())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("no_unacceptable_leaks") == 0)
		{
			if(no_unacceptable_leaks())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("no_calibrate_OS") == 0)
		{
			if(no_calibrate_OS())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("no_functional_local_alarms") == 0)
		{
			if(no_functional_local_alarms())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("no_functional_ps_exp") == 0)
		{
			if(no_functional_ps_exp())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_fi2") == 0)
		{
			if(get_fi2())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("unacceptable_leaks") == 0)
		{
			if(unacceptable_leaks())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("get_ps_exp") == 0)
		{
			if(get_ps_exp())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("no_connected_or_calibrated") == 0)
		{
			if(no_connected_or_calibrated())
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
