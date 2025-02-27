#include<stdlib.h>
#include<string.h>
#include"ticket.h"

List *init_list()
{
    List *my_list;

    my_list=(List*)malloc(sizeof(List));
    if(NULL==my_list)return LIST_MEM_ALLOC_FAIL;

    my_list->head=my_list->tail=NULL;
    my_list->count=0;

    return my_list;
}

Theater *add_theater(List *my_list, Result *result)
{
    Theater *my_theater;
    
    if (NULL == my_list)return EMPTY_LIST;

    my_theater=(Theater*)malloc(sizeof(Theater));
    
    if(NULL==my_theater)
    {
        result->status=FAILURE;
        return NULL;
    }

    my_theater->show=NULL;
    my_theater->ptr=NULL;

    if(my_list->count==0)
    {
        my_list->head = my_list->tail = my_theater;
        my_list->count++;
    }
    
    else
    {
        //insert at end
        my_list->tail->ptr = my_theater;
        my_list->tail = my_theater;
        my_list->count++;  
    }

    result->status=SUCCESS;

    return my_theater;
}

