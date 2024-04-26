#include "Static_Circular_Queue.h"


// Hidden Methods
static Queue_Status Queue_Validation(Queue_Buf_t* My_Queue)
{
    if(!My_Queue->base || !My_Queue->front || !My_Queue->rear || My_Queue->length<1)
    {
        return QUEUE_NOK;
    }
    return QUEUE_OK;
}

// APIs (Implementation)

Queue_Status Queue_Init      (Queue_Buf_t* My_Queue, element_type* My_Storage, uint32_t length)
{
    // For Validation
    if(My_Storage==NULL || length<1)
    {
        return QUEUE_NOK;
    }

    My_Queue->base=My_Storage;
    My_Queue->front=My_Storage;
    My_Queue->rear=My_Storage;

    My_Queue->count=0;
    My_Queue->length=length;

    return QUEUE_OK;
}

Queue_Status Queue_Enqueue   (Queue_Buf_t* My_Queue,element_type item)
{
    // For Validation
    if(Queue_Validation(My_Queue)==QUEUE_NOK)
    {
        return QUEUE_NOK;
    }

    if(Queue_IS_FULL(My_Queue)==QUEUE_FULL)
    {
        return QUEUE_FULL;
    }

    *(My_Queue->rear) = item;

    if( (My_Queue->base+My_Queue->length-1) == My_Queue->rear )
    {
        My_Queue->rear = My_Queue->base;
    }
    else
    {
        My_Queue->rear++;
    }

    My_Queue->count++;

    return QUEUE_OK;
}

Queue_Status Queue_Dequeue   (Queue_Buf_t* My_Queue,element_type* item)
{
    // For Validation
    if(Queue_Validation(My_Queue)==QUEUE_NOK)
    {
        return QUEUE_NOK;
    }

    if(Queue_IS_EMPTY(My_Queue)==QUEUE_EMPTY)
    {
        return QUEUE_EMPTY;
    }

    *item=*(My_Queue->front);

    if((My_Queue->base+My_Queue->length-1) == My_Queue->front)
    {
        My_Queue->front = My_Queue->base;
    }
    else
    {
        My_Queue->front++;
    }

    My_Queue->count--;

    return QUEUE_OK;
}

Queue_Status Queue_Front     (Queue_Buf_t* My_Queue,element_type* item)
{
    // For Validation
    if(Queue_Validation(My_Queue)==QUEUE_NOK)
    {
        return QUEUE_NOK;
    }

    if(Queue_IS_EMPTY(My_Queue)==QUEUE_EMPTY)
    {
        return QUEUE_EMPTY;
    }

    *item=*(My_Queue->front);

    return QUEUE_OK;
}

Queue_Status Queue_Back      (Queue_Buf_t* My_Queue,element_type* item)
{
    // For Validation
    if(Queue_Validation(My_Queue)==QUEUE_NOK)
    {
        return QUEUE_NOK;
    }

    if(Queue_IS_EMPTY(My_Queue)==QUEUE_EMPTY)
    {
        return QUEUE_EMPTY;
    }

    if(My_Queue->rear==My_Queue->base)
    {
        *item= *(My_Queue->base+My_Queue->length-1);
    }
    else
    {
        *item = *(My_Queue->rear-1);
    }

    return QUEUE_OK;
}

Queue_Status Queue_Size      (Queue_Buf_t* My_Queue,uint32_t* size)
{
    // For Validation
    if(Queue_Validation(My_Queue)==QUEUE_NOK)
    {
        return QUEUE_NOK;
    }

    *size=My_Queue->count;

    return QUEUE_OK;
}
Queue_Status Queue_IS_FULL   (Queue_Buf_t* My_Queue)
{
    if(My_Queue->count==My_Queue->length)
    {
        return QUEUE_FULL;
    }

    return QUEUE_NOT_FULL;
}
Queue_Status Queue_IS_EMPTY  (Queue_Buf_t* My_Queue)
{
    if(My_Queue->count==0)
    {
        return QUEUE_EMPTY;
    }

    return QUEUE_NOT_EMPTY;
}
