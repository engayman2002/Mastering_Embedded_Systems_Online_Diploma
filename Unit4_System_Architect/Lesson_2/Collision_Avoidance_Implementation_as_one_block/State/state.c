#include <stdio.h>
#include <stdlib.h>
#include "state.h"



int Generate_Random(int l,int h,int count)
{
    return (rand()%(h-l+1)+l);
}
