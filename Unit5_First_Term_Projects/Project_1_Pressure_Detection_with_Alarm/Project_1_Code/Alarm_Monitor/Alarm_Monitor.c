#include "Alarm_Monitor.h"
#define time 1000000

static void Alarm_ON()
{
    Alarm_Set();
}

static void Alarm_OFF()
{
    Alarm_Reset();
}

void High_Pressure_Detected()
{
    Alarm_ON();
    Delay(time); // 60 Seconds aprox.
    Alarm_OFF();
    Delay(time); // 60 Seconds aprox.
}