#include "Linked_List.h"
#include <stdlib.h>

Linked_List_Status Linked_List_Init(Linked_List_Node My_Head)
{
    My_Head->PNextLinkedList=NULL;
    return Linked_OK;
}

Linked_List_Status Linked_List_AddNode(Linked_List_Node My_Head,element_type data)
{
    Linked_List_Node NewNode = (Linked_List_Node)malloc(sizeof(Linked_List_Node));
    if(NewNode==NULL)
    {
        return Linked_FULL;
    }

    // You can here change it if you change elements in Linked_List.
    NewNode->Person.id=data;

    Linked_List_Node PLastNode=My_Head;
    if(PLastNode->PNextLinkedList==NULL)
    {
        My_Head->PNextLinkedList=NewNode;
    }
    else
    {
        PLastNode=My_Head->PNextLinkedList;
        while(PLastNode->PNextLinkedList!=NULL)
        {
            PLastNode = PLastNode->PNextLinkedList;
        }
        PLastNode->PNextLinkedList=NewNode;
    }
    NewNode->PNextLinkedList=NULL;
    return Linked_OK;
}

Linked_List_Status Linked_List_RemoveNode(Linked_List_Node My_Head,uint32_t index)
{
    // For Validation
    if(index<0)
    {
        return Linked_NOK;
    }

    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_EMPTY;
    }

    uint32_t count=0;
    Linked_List_Node PFindIndex=My_Head->PNextLinkedList;
    Linked_List_Node PPrevIndex=My_Head->PNextLinkedList;

    while(count!=index)
    {
        count++;
        if(PPrevIndex!=PFindIndex)
        {
            PPrevIndex=PFindIndex;
        }
        PFindIndex=PFindIndex->PNextLinkedList;
        if(count==index)
        {
            break;
        }
        if(PFindIndex->PNextLinkedList==NULL)
        {
            return Linked_OutOfTheRange;
        }
    }

    if(index==0)
    {
        My_Head->PNextLinkedList=My_Head->PNextLinkedList->PNextLinkedList;
    }
    else
    {
        PPrevIndex->PNextLinkedList=PFindIndex->PNextLinkedList;
    }
    free(PFindIndex);

    return Linked_OK;
}

Linked_List_Status Linked_List_FindNode(Linked_List_Node My_Head,element_type data,uint32_t* index)
{
    // For Validation
    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_NotFound;
    }

    uint32_t count=0;

    Linked_List_Node PFindIndex=My_Head->PNextLinkedList;

    while(PFindIndex!=NULL)
    {
        if(data==PFindIndex->Person.id)
        {
            *index=count;
            return Linked_Found;
        }
        count++;
        PFindIndex=PFindIndex->PNextLinkedList;
    }
    return Linked_NotFound;
}


Linked_List_Status Linked_List_Length(Linked_List_Node My_Head,uint32_t *length)
{
    // For Validation
    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_EMPTY;
    }

    uint32_t count=0;

    Linked_List_Node PFindLength=My_Head->PNextLinkedList;

    while(PFindLength->PNextLinkedList!=NULL)
    {
        count++;
        PFindLength=PFindLength->PNextLinkedList;
    }

    *length = count+1;

    return Linked_OK;
}


Linked_List_Status Linked_List_Front(Linked_List_Node My_Head,element_type *data)
{
    // For Validation
    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_EMPTY;
    }

    *data=My_Head->PNextLinkedList->Person.id;

    return Linked_OK;
}

Linked_List_Status Linked_List_Back(Linked_List_Node My_Head,element_type *data)
{
    // For Validation
    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_EMPTY;
    }

    Linked_List_Node PBack=My_Head->PNextLinkedList;

    while(PBack->PNextLinkedList!=NULL)
    {
        PBack=PBack->PNextLinkedList;
    }

    *data=PBack->Person.id;

    return Linked_OK;
}

Linked_List_Status Linked_List_IsFull()
{
    Linked_List_Node NewNode = (Linked_List_Node)malloc(sizeof(Linked_List_Node));
    if(NewNode==NULL)
    {
        return Linked_FULL;
    }

    free(NewNode);

    return Linked_OK;
}


Linked_List_Status Linked_List_IsEmpty(Linked_List_Node My_Head)
{
    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_EMPTY;
    }

    return Linked_OK;
}


Linked_List_Status Linked_List_NthNodeFromFront(Linked_List_Node My_Head,element_type *data,uint32_t index)
{
    // For Validation
    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_EMPTY;
    }

    uint32_t count=0;

    Linked_List_Node PNode=My_Head->PNextLinkedList;

    while(count!=index)
    {
        if(PNode->PNextLinkedList==NULL)
        {
            return Linked_OutOfTheRange;
        }
        count++;
        PNode=PNode->PNextLinkedList;
    }
    *data=PNode->Person.id;
    return Linked_Found;
}

Linked_List_Status Linked_List_NthNodeFromBack(Linked_List_Node My_Head,element_type *data,uint32_t index)
{
    // For Validation
    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_EMPTY;
    }

    uint32_t count=0;

    Linked_List_Node PFront=My_Head->PNextLinkedList;
    Linked_List_Node PBack=My_Head->PNextLinkedList;

    while(count!=index)
    {
        if(PFront->PNextLinkedList==NULL)
        {
            return Linked_OutOfTheRange;
        }
        count++;
        PFront=PFront->PNextLinkedList;
    }

    while(PFront->PNextLinkedList!=NULL)
    {
        PFront=PFront->PNextLinkedList;
        PBack=PBack->PNextLinkedList;
    }

    *data=PBack->Person.id;

    return Linked_Found;
}


Linked_List_Status Linked_List_Reverse(Linked_List_Node My_Head)
{
    // For Validation
    if(My_Head->PNextLinkedList==NULL)
    {
        return Linked_EMPTY;
    }
    if(My_Head->PNextLinkedList->PNextLinkedList==NULL)
    {
        return Linked_OK;
    }

    Linked_List_Node Buffer1=My_Head->PNextLinkedList->PNextLinkedList;
    Linked_List_Node Buffer2=My_Head->PNextLinkedList;
    Buffer2->PNextLinkedList=NULL;

    while(Buffer1!=NULL)
    {
        My_Head->PNextLinkedList=Buffer1;
        Buffer1=Buffer1->PNextLinkedList;

        My_Head->PNextLinkedList->PNextLinkedList=Buffer2;
        Buffer2=My_Head->PNextLinkedList;
    }

    return Linked_OK;
}
