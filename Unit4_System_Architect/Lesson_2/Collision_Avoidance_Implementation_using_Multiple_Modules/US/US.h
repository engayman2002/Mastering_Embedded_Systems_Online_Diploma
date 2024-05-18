#ifndef US_H_
#define US_H_

#include "../State/state.h"

enum
{
    US_idle,
    US_busy,
}US_State_ID;

extern void US_init();
extern int US_Get_Distance();

#endif