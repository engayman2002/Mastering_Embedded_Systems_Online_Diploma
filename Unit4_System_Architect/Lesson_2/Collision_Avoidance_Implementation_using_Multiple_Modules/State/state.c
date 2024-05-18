#include "state.h"

int Generate_Random(int l,int h)
{
    return ((rand()%(h-l+1))+l);
}