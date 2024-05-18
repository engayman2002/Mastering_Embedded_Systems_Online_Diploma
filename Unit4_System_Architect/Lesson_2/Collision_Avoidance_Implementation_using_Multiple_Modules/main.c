#include <stdio.h>
#include "Collision_Avoidance/Collision_Avoidance.h"
#include "DC_Motor/DC_Motor.h"
#include "State/state.h"
#include "US/US.h"

#define US_LOW_VALUE threshold-5
#define US_HIGH_VALUE threshold+5


int distance,threshold=30;
int Speed_State_ON= 65; // It's the speed while driving state.
int US_Low;
int US_High;

void Setup()
{
    CA_State = State(CA_waiting);
    speed = 0;
    US_init();
    DC_Motor_init();
    US_Low = US_LOW_VALUE;
    US_High = US_HIGH_VALUE;
}

extern void (*CA_State)();

int main()
{
    Setup();
    int num_of_states = 10;

    while(num_of_states--)
    {
        printf("\n------------------------------------------------\n");
        CA_State();
        printf("\n------------------------------------------------\n");
    }

    return 0;
}