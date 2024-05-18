#ifndef STATE_H_
#define STATE_H_

#define State_define(My_State) void State_##My_State()
#define State(My_State) State_##My_State

enum{
    waiting,
    driving
}State_ID;

void (*state)(); // Pointer to function returns void.

extern int Generate_Random(int l,int h,int count);

#endif