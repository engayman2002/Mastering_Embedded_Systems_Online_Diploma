#include <stdio.h>
#include "./Collision_Avoidance/collision_avoidance.h"
#include "./State/state.h"

#define No_State 50

int main()
{
    Setup();
	int num_of_state = No_State;
	
    while (num_of_state--)
    {
        state();
    }
    return 0;
}