#ifndef COLLISION_AVOIDANCE_H_
#define COLLISION_AVOIDANCE_H_

#include "../State/state.h"


void (*CA_State)(); // Pointer to function returns void - it switch between waiting and driving states.

extern int distance,threshold;
int speed ;
extern int Speed_State_ON;


enum
{
    CA_waiting,
    CA_driving
}Collision_Avoidance_State_ID; // it carrys the ID of the current state.

extern State_define(CA_waiting);
extern State_define(CA_driving);

extern void (*CA_State)();

#endif