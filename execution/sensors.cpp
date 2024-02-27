#include "readConfig.h"
#include "helper.h"
#include <chrono>
#include <ctime>
#include "inttypes.h"
std::time_t  current_time = 0;
enum AutState
{
  S0
};
struct TState_RmParametersSensors
{
  AutState  autState;

};
struct TState_HWSensors
{
  AutState  autState;

};
struct TState_Sensors_o8
{
  Timer left_clock_HWSensors = current_time;
  Timer right_clock_RmParametersSensors = current_time;
  TState_HWSensors  ts_HWSensors;
  TState_RmParametersSensors  ts_RmParametersSensors;

};
struct TState_AlarmThresholdsSensors
{
  AutState  autState;

};
struct TState_Sensors_o7
{
  Timer right_clock_Sensors_o8 = current_time;
  Timer left_clock_AlarmThresholdsSensors = current_time;
  TState_AlarmThresholdsSensors  ts_AlarmThresholdsSensors;
  TState_Sensors_o8  ts_Sensors_o8;

};
struct TState_PSVModeSensors
{
  AutState  autState;

};
struct TState_Sensors_o6
{
  Timer right_clock_Sensors_o7 = current_time;
  Timer left_clock_PSVModeSensors = current_time;
  TState_PSVModeSensors  ts_PSVModeSensors;
  TState_Sensors_o7  ts_Sensors_o7;

};
struct TState_ApneaBackupSensors
{
  AutState  autState;

};
struct TState_Sensors_o5
{
  Timer right_clock_Sensors_o6 = current_time;
  Timer left_clock_ApneaBackupSensors = current_time;
  TState_ApneaBackupSensors  ts_ApneaBackupSensors;
  TState_Sensors_o6  ts_Sensors_o6;

};
struct TState_PCVModeSensors
{
  AutState  autState;

};
struct TState_Sensors_o4
{
  Timer right_clock_Sensors_o5 = current_time;
  Timer left_clock_PCVModeSensors = current_time;
  TState_PCVModeSensors  ts_PCVModeSensors;
  TState_Sensors_o5  ts_Sensors_o5;

};
struct TState_SetVE
{
  AutState  autState;

};
struct TState_Sensors_o3
{
  Timer right_clock_Sensors_o4 = current_time;
  Timer left_clock_SetVE = current_time;
  TState_SetVE  ts_SetVE;
  TState_Sensors_o4  ts_Sensors_o4;

};
struct TState_SetPAW
{
  AutState  autState;

};
struct TState_Sensors_o2
{
  Timer left_clock_SetPAW = current_time;
  Timer right_clock_Sensors_o3 = current_time;
  TState_SetPAW  ts_SetPAW;
  TState_Sensors_o3  ts_Sensors_o3;

};
struct TState_ChangeMode
{
  AutState  autState;

};
struct TState_Sensors_o1
{
  Timer left_clock_ChangeMode = current_time;
  Timer right_clock_Sensors_o2 = current_time;
  TState_ChangeMode  ts_ChangeMode;
  TState_Sensors_o2  ts_Sensors_o2;

};
struct TState_SetPeakPinsp
{
  AutState  autState;

};
struct TState_Sensors
{
  float  paw_drop_in;
  Parameters  updated_parameters;
  float  peak_pinsp;
  Parameters  parameters;
  float  ve;
  std::string   mode;
  Timer right_clock_Sensors_o1 = current_time;
  Timer left_clock_SetPeakPinsp = current_time;
  TState_SetPeakPinsp  ts_SetPeakPinsp;
  TState_Sensors_o1  ts_Sensors_o1;

};
TState_Sensors  ts_Sensors;
std::time_t  step_time = 1.0E8;
Timer  last_event_time = 0;

int    set_pinsp_pcv(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
						{
							ts_Sensors.updated_parameters.pinsp_pcv=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.left_clock_PCVModeSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState = S0;
							exec = 1;
						
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_min_vtidal_insp(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.min_vtidal_insp=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_min_rr(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.min_rr=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_ie_ap(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
							{
								ts_Sensors.updated_parameters.ie_ap=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.left_clock_ApneaBackupSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState = S0;
								exec = 1;
							
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_max_peep(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.max_peep=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_oxygen_sensor(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.oxygen_sensor=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_temperature(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.temperature=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_apnea_lag(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
								{
									ts_Sensors.updated_parameters.apnea_lag=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.left_clock_PSVModeSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState = S0;
									exec = 1;
								
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    start_psv()
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState == S0)
			{
				ts_Sensors.mode="psv";ts_Sensors.parameters.start_psv=true;ts_Sensors.ts_Sensors_o1.left_clock_ChangeMode.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState = S0;
				exec = 1;
			
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_max_pinsp(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.max_pinsp=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_ps_ins(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.ps_ins=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_fi2(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.fi2=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_fi1(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.fi1=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_pinsp_psv(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
								{
									ts_Sensors.updated_parameters.pinsp_psv=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.left_clock_PSVModeSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState = S0;
									exec = 1;
								
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_its_pcv(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
						{
							ts_Sensors.updated_parameters.its_pcv=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.left_clock_PCVModeSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState = S0;
							exec = 1;
						
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_min_peep(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.min_peep=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_ie_pcv(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
						{
							ts_Sensors.updated_parameters.ie_pcv=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.left_clock_PCVModeSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState = S0;
							exec = 1;
						
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_gas_pressure(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.gas_pressure=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_rr_pcv(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState == S0)
						{
							ts_Sensors.updated_parameters.rr_pcv=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.left_clock_PCVModeSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState = S0;
							exec = 1;
						
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_its_psv(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
								{
									ts_Sensors.updated_parameters.its_psv=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.left_clock_PSVModeSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState = S0;
									exec = 1;
								
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_prm(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.prm=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.right_clock_RmParametersSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_max_rr(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.max_rr=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_rr_ap(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
							{
								ts_Sensors.updated_parameters.rr_ap=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.left_clock_ApneaBackupSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState = S0;
								exec = 1;
							
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_ets(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState == S0)
								{
									ts_Sensors.updated_parameters.ets=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.left_clock_PSVModeSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState = S0;
									exec = 1;
								
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_max_vtidal_insp(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.max_vtidal_insp=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_pinsp_ap(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState == S0)
							{
								ts_Sensors.updated_parameters.pinsp_ap=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.left_clock_ApneaBackupSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState = S0;
								exec = 1;
							
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_paw(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_SetPAW.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_SetPAW.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_SetPAW.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_SetPAW.autState == S0)
				{
					ts_Sensors.paw_drop_in=ts_Sensors.parameters.paw-p0;ts_Sensors.parameters.paw=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.left_clock_SetPAW.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_SetPAW.autState = S0;
					exec = 1;
				
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_min_vtidal_exp(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.min_vtidal_exp=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_min_pinsp(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.min_pinsp=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_fan_tachometer(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.fan_tachometer=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_peak_pinsp(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_SetPeakPinsp.autState == S0)
	{
		if(ts_Sensors.ts_SetPeakPinsp.autState == S0)
		{
			ts_Sensors.peak_pinsp=p0;ts_Sensors.left_clock_SetPeakPinsp.reset_clock(current_time);ts_Sensors.ts_SetPeakPinsp.autState = S0;
			exec = 1;
		
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_max_rm_time(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.max_rm_time=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.right_clock_RmParametersSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_battery_charge_level(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.battery_charge_level=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_ps_exp(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.updated_parameters.ps_exp=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_min_ve(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.min_ve=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_max_vtidal_exp(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.max_vtidal_exp=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_max_ve(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState == S0)
									{
										ts_Sensors.updated_parameters.max_ve=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
										exec = 1;
									
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_ve(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_SetVE.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_SetVE.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_SetVE.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_SetVE.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_SetVE.autState == S0)
					{
						ts_Sensors.ve=p0;ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.left_clock_SetVE.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_SetVE.autState = S0;
						exec = 1;
					
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    set_power_supply(float  p0)
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
			{
				if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
				{
					if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
					{
						if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
						{
							if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
							{
								if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
								{
									if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
									{
										if(ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState == S0)
										{
											ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
											exec = 1;
										
										}
										ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
									}
									ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
								}
								ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
							}
							ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
						}
						ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
					}
					ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
				}
				ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    start_pcv()
{
	int  exec = 0;
	if(ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState == S0)
	{
		if(ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState == S0)
		{
			if(ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState == S0)
			{
				ts_Sensors.mode="pcv";ts_Sensors.parameters.start_pcv=true;ts_Sensors.ts_Sensors_o1.left_clock_ChangeMode.reset_clock(current_time);ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState = S0;
				exec = 1;
			
			}
			ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
		}
	
	}
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}

int    Step()
{
	int  exec = 1;
	current_time = step_time+current_time;
	if(exec == 1)
	{
		last_event_time.reset_clock(current_time);
	
	}
	return exec;

}
int main(int argc, char** argv)
{
	IO::configInputStream(argc, argv);
	ts_Sensors.paw_drop_in = paw_drop_in;
	ts_Sensors.updated_parameters = updated_parameters;
	ts_Sensors.peak_pinsp = peak_pinsp;
	ts_Sensors.parameters = parameters;
	ts_Sensors.ve = ve;
	ts_Sensors.mode = "mode";
	ts_Sensors.right_clock_Sensors_o1.reset_clock(current_time);
	ts_Sensors.left_clock_SetPeakPinsp.reset_clock(current_time);
	ts_Sensors.ts_SetPeakPinsp.autState = S0;
	ts_Sensors.ts_Sensors_o1.left_clock_ChangeMode.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.right_clock_Sensors_o2.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_ChangeMode.autState = S0;
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.left_clock_SetPAW.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.right_clock_Sensors_o3.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_SetPAW.autState = S0;
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.right_clock_Sensors_o4.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.left_clock_SetVE.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_SetVE.autState = S0;
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.right_clock_Sensors_o5.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.left_clock_PCVModeSensors.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_PCVModeSensors.autState = S0;
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.right_clock_Sensors_o6.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.left_clock_ApneaBackupSensors.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_ApneaBackupSensors.autState = S0;
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.right_clock_Sensors_o7.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.left_clock_PSVModeSensors.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_PSVModeSensors.autState = S0;
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.right_clock_Sensors_o8.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.left_clock_AlarmThresholdsSensors.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_AlarmThresholdsSensors.autState = S0;
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.left_clock_HWSensors.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.right_clock_RmParametersSensors.reset_clock(current_time);
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_HWSensors.autState = S0;
	ts_Sensors.ts_Sensors_o1.ts_Sensors_o2.ts_Sensors_o3.ts_Sensors_o4.ts_Sensors_o5.ts_Sensors_o6.ts_Sensors_o7.ts_Sensors_o8.ts_RmParametersSensors.autState = S0;
	while (1)
	{
		Event  _evt = IO::read_event(argc);
		if(_evt.label.empty())
		{
			break;
		
		}else if(_evt.label.compare("set_pinsp_pcv") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_pinsp_pcv(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_min_vtidal_insp") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_min_vtidal_insp(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_min_rr") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_min_rr(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_ie_ap") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_ie_ap(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_max_peep") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_max_peep(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_oxygen_sensor") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_oxygen_sensor(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_temperature") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_temperature(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_apnea_lag") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_apnea_lag(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("start_psv") == 0)
		{
			if(start_psv())
			{
				continue;
			}else 
			{
				ERROR_2;
			
			}
		
		}else if(_evt.label.compare("set_max_pinsp") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_max_pinsp(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_ps_ins") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_ps_ins(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_fi2") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_fi2(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_fi1") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_fi1(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_pinsp_psv") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_pinsp_psv(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_its_pcv") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_its_pcv(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_min_peep") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_min_peep(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_ie_pcv") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_ie_pcv(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_gas_pressure") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_gas_pressure(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_rr_pcv") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_rr_pcv(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_its_psv") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_its_psv(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_prm") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_prm(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_max_rr") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_max_rr(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_rr_ap") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_rr_ap(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_ets") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_ets(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_max_vtidal_insp") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_max_vtidal_insp(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_pinsp_ap") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_pinsp_ap(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_paw") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_paw(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_min_vtidal_exp") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_min_vtidal_exp(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_min_pinsp") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_min_pinsp(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_fan_tachometer") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_fan_tachometer(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_peak_pinsp") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_peak_pinsp(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_max_rm_time") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_max_rm_time(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_battery_charge_level") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_battery_charge_level(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_ps_exp") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_ps_exp(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_min_ve") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_min_ve(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_max_vtidal_exp") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_max_vtidal_exp(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_max_ve") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_max_ve(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_ve") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_ve(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("set_power_supply") == 0)
		{
			bool  flag = 0;
			if(_evt.params.size() == 1)
			{
				float  p0;
				p0 = Types::get_float(_evt.params[0], flag);
				if((!(flag) && set_power_supply(p0)))
				{
					continue;
				}else if(flag)
				{
					ERROR_6;
				
				}else 
				{
					ERROR_2;
				
				}
			
			}else 
			{
				ERROR_7;
			
			}
		
		}else if(_evt.label.compare("start_pcv") == 0)
		{
			if(start_pcv())
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
