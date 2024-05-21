#include <stdint.h>
#include <stdio.h>

#include "driver/driver.h"
#include "Pressure_Sensor_Driver/Pressure_Sensor_Driver.h"
#include "Alarm_Driver/Alarm_Driver.h"

int main (){
	GPIO_INITIALIZATION();
	uint32_t PVal;
	int Values[]={13,23};
	PVal = Values[0];
	
	while (1)
	{
		//Implement your Design 
		//PVal = Get_Pressure_Value(); // This Provided API doesn't work so here I simulated it by testing values.
		
		if(PVal >= 20)
		{
			High_Pressure_Detected();
			PVal = Values[0];
		}
		else
		{
			Alarm_Reset();
			PVal = Values[1];
		}
	}

}
