#include <stdlib.h>
#include "point.h"

List* init_list()
{
    List *my_list;
    my_list=(List *)malloc(sizeof(List));
    if(NULL == my_list)return INIT_LIST_FAIL;

    my_list->head = NULL;
    my_list->tail = NULL;
    my_list->max = NULL;
    my_list->count = 0;

    return my_list;
}

int insert_list(List *my_list,Point data)
{
    Node *my_node,*temp;

    my_node->point.x = data.x;
    my_node->point.y = data.y;
    my_node->point.w = data.w;
    

    if(0 == my_list->count)
    {
        my_list->head = my_node;
        my_list->tail = my_node;
        my_list->max = my_node;
    }
    else
    {
        temp = my_list->head;
        my_list->head = my_node;
        my_node->ptr = temp;
        if(my_list->max->point.w < my_node->point.w)my_list->max = my_node;
    }

    my_list->count++;

    return SUCCESS;
}