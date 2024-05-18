#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

extern int speed;

enum
{
    DC_Motor_idle,
    DC_Motor_busy
}DC_Motor_State_ID;

extern void DC_Motor_init();
extern void DC_Motor_Set_Speed();

#endif