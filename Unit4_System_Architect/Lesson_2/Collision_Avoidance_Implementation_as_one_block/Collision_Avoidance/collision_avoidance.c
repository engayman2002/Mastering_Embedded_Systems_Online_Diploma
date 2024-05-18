#include "collision_avoidance.h"
#include "../State/state.h"
#define low threshold-5
#define high threshold+5

unsigned int distance,speed,threshold = 30;

void Event_State()
{
    state = (distance<=threshold)?State(waiting):State(driving);
    if(state == State(waiting))
    {
        speed = 0;
        State_ID = waiting;
        state = State(waiting);
    }
    else
    {
        speed = 65;
        State_ID = driving;
        state = State(driving);
    }
}

State_define(waiting)
{
    // State Action
    State_ID = waiting ;
    distance = US_Get_Distance();

    // Check Event
    Event_State();

    printf("\nWaiting State: distance = %d, Speed = %d\n",distance,speed);
}

State_define(driving)
{
    // State Action
    State_ID = driving;
    distance = US_Get_Distance();
    
    // Check Event
    Event_State();

    // It's like the action
    printf("\nDriving State: distance = %d, Speed = %d\n",distance,speed);
}

void US_init()
{
    printf("\nUltraSonic_init\n");
}
void DC_Motor_init()
{
    printf("\nDC_Motor_init\n");
}

int US_Get_Distance()
{
    return Generate_Random(low,high,1);
}

void Setup()
{
    US_init();
    DC_Motor_init();
    state = State(waiting);
}