#include "US.h"
#include <stdio.h>

// Please Declare them and enter the values of them.
// There are only for testing.
extern int US_Low;
extern int US_High;

void US_init()
{
    // Initialize UltraSonic Sensor
    printf("\nUS_init\n");
    US_State_ID = US_idle;
}

int US_Get_Distance()
{
    // Here you must clear them and write the way of getting the distance with (Trig,Echo,Time,....).
    US_State_ID = US_busy;
    int num = Generate_Random(US_Low,US_High);
    printf("\nUS_Busy state : distance = %d\n",num);
    US_State_ID = US_idle;
    return num;
}