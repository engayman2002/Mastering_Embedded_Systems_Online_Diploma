#include "Collision_Avoidance.h"
#include "../US/US.h"
#include "../DC_Motor/DC_Motor.h"

State_define(CA_waiting)
{
    CA_State = State(CA_waiting);
    distance = US_Get_Distance();
    if(distance <= threshold)
    {
        speed = 0;
        DC_Motor_Set_Speed(speed);
        printf("\nWaiting_State: distance = %d , I am still in the waiting state with speed = %d\n",distance,speed);
    }
    else
    {
        CA_State = State(CA_driving);
        speed = Speed_State_ON;
        DC_Motor_Set_Speed(speed);
        printf("\nWaiting_State: distance = %d , I switched to the driving state with speed = %d\n",distance,speed);
    }
}

State_define(CA_driving)
{
    CA_State = State(CA_driving);
    distance = US_Get_Distance();
    if(distance > threshold)
    {
        speed = Speed_State_ON;
        DC_Motor_Set_Speed(speed);
        printf("\nDriving_State: distance = %d , I am still in the driving state with speed = %d\n",distance,speed);
    }
    else
    {
        CA_State = State(CA_waiting);
        speed = 0;
        DC_Motor_Set_Speed(speed);
        printf("\nDriving_State: distance = %d , I switched to the waiting state with speed = %d\n",distance,speed);
    }
}