#include "Alarm_Driver.h"

void Alarm_Set()
{
    Set_Alarm_actuator(0);
}

void Alarm_Reset()
{
    Set_Alarm_actuator(1);
}