#ifndef COLLISION_AVOIDANCE_H_
#define COLLISION_AVOIDANCE_H_

#include "../State/state.h"


extern unsigned int distance,speed,threshold;

// My Program States
State_define(waiting);
State_define(driving);


// Please Call it in the first of your program.
extern void Setup();

#endif