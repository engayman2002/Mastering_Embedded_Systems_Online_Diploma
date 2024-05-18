#include <stdio.h>
#include "DC_Motor.h"

void DC_Motor_init()
{
    printf("\nDC_Motor_init (idle State)\n");
    DC_Motor_State_ID = DC_Motor_idle;
}
extern void DC_Motor_Set_Speed()
{
    DC_Motor_State_ID = DC_Motor_busy;
    printf("\nDC_Motor is Busy , Speed = %d\n",speed);
    DC_Motor_State_ID = DC_Motor_idle;
}