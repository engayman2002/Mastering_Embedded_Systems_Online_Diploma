#ifndef Static_Circular_Queue_H_
#define Static_Circular_Queue_H_

#include "My_Platform_Types.h"

// You must change element_type with your prefered data type.
#define element_type uint16_t

typedef struct
{
    element_type* base;
    element_type* front;
    element_type* rear;

    uint32_t count;
    uint32_t length;

}Queue_Buf_t;


// You must declare your static array because it's the storage of your Queue.
/* Example:
	element_type My_Queue[100];
	// Here you created queue with maximum length (100 elements).
*/

typedef enum
{
	QUEUE_NOK,
	QUEUE_OK,
	QUEUE_FULL,
    QUEUE_NOT_FULL,
	QUEUE_EMPTY,
    QUEUE_NOT_EMPTY
}Queue_Status;

// APIs
extern Queue_Status Queue_Init      (Queue_Buf_t* My_Queue, element_type* My_Storage, uint32_t length);

extern Queue_Status Queue_Enqueue   (Queue_Buf_t* My_Queue,element_type item);
extern Queue_Status Queue_Dequeue   (Queue_Buf_t* My_Queue,element_type* item);

extern Queue_Status Queue_Front     (Queue_Buf_t* My_Queue,element_type* item);
extern Queue_Status Queue_Back      (Queue_Buf_t* My_Queue,element_type* item);

extern Queue_Status Queue_Size      (Queue_Buf_t* My_Queue,uint32_t* size);
extern Queue_Status Queue_IS_FULL   (Queue_Buf_t* My_Queue);
extern Queue_Status Queue_IS_EMPTY  (Queue_Buf_t* My_Queue);



#endif
