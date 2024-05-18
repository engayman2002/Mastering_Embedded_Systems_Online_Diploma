#ifndef STATE_H_
#define STATE_H_
#include <stdio.h>
#include <stdlib.h>



#define State_define(My_State) void State_##My_State()
#define State(My_State) State_##My_State


extern int Generate_Random(int l,int h); // It's instead of the Sensor to give me values for testing.

// Please Declare them in your App with your values. (There are for UltraSonic Sensor for Testing)
extern int US_Low;
extern int US_High;

#endif