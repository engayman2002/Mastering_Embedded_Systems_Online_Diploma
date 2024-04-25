#ifndef _STATIC_STACK_H_
#define _STATIC_STACK_H_

#include "My_Platform_Types.h"


// You must change element_type with your prefered data type.
#define element_type uint32_t

typedef struct
{
	uint32_t length;
	uint32_t count;
	
	element_type* base;
	element_type* head;
}Stack_Buf_t;

// You must declare your static array because it's the storage of your Stack.
/* Example:
	element_type My_Stack[100];
	// Here you created stack with maximum length (100 elements).
*/

typedef enum
{
	STACK_NOK,
	STACK_OK,
	STACK_FULL,
	STACK_EMPTY,
}Stack_Status;


// APIs
extern Stack_Status Stack_Init		(Stack_Buf_t* My_Stack,element_type* My_Storage,uint32_t length);
extern Stack_Status Stack_Push		(Stack_Buf_t* My_Stack , element_type item);
extern Stack_Status Stack_Pop		(Stack_Buf_t* My_Stack , element_type *item);
extern Stack_Status Stack_Top		(Stack_Buf_t* My_Stack , element_type *item);
extern Stack_Status Stack_SIZE		(Stack_Buf_t* My_Stack,uint32_t* Stack_Size);
extern Stack_Status Stack_IS_FULL	(Stack_Buf_t* My_Stack);
extern Stack_Status Stack_IS_EMPTY	(Stack_Buf_t* My_Stack);



#endif