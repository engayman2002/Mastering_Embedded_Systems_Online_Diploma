#include "Static_Stack.h"

// APIs
Stack_Status Stack_Init		(Stack_Buf_t* My_Stack,element_type* My_Storage,uint32_t length)
{
    // For Validation
    if(My_Storage==NULL || length<1)
    {
        return STACK_NOK;
    }

    My_Stack->base=My_Storage;
    My_Stack->head=My_Storage;
    My_Stack->count=0;
    My_Stack->length=length;

    return STACK_OK;
}

Stack_Status Stack_Push		(Stack_Buf_t* My_Stack , element_type item)
{
    // For Validation
    if(Stack_IS_FULL==STACK_FULL)
    {
        return STACK_FULL;
    }

    My_Stack->count++;
    *(My_Stack->head)=item;
    if( (My_Stack->count) < (My_Stack->length) )
    {
        My_Stack->head++;
    }
    
    return STACK_OK;
}

Stack_Status Stack_Pop		(Stack_Buf_t* My_Stack , element_type *item)
{
    // For Validation
    if(Stack_IS_EMPTY==STACK_EMPTY)
    {
        return STACK_EMPTY;
    }
    
    if( (My_Stack->count) == (My_Stack->length) )
    {
        *item=*(My_Stack->head);
        My_Stack->head--;
    }
    else
    {
        My_Stack->head--;
        *item=*(My_Stack->head);
    }
    
    My_Stack->count--;

    return STACK_OK;
}

Stack_Status Stack_Top		(Stack_Buf_t* My_Stack , element_type *item)
{
    // For Validation
    if(Stack_IS_EMPTY==STACK_EMPTY)
    {
        return STACK_EMPTY;
    }

    if(My_Stack->count==My_Stack->length)
    {
        *item=*(My_Stack->head);
    }
    else
    {
        *item=*(My_Stack->head-1);
    }

    return STACK_OK;
}

Stack_Status Stack_SIZE		(Stack_Buf_t* My_Stack,uint32_t* Stack_Size)
{
    *Stack_Size = My_Stack->count;
    return STACK_OK;
}

Stack_Status Stack_IS_FULL	(Stack_Buf_t* My_Stack)
{
    if( (My_Stack->count) == (My_Stack->length) )
    {
        return STACK_FULL;
    }

    return STACK_OK;
    
}

Stack_Status Stack_IS_EMPTY	(Stack_Buf_t* My_Stack)
{
    if( (My_Stack->count) == 0)
    {
        return STACK_EMPTY;
    }
    return STACK_OK;
}