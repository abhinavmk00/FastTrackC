
#include <stdlib.h>
#include "list.h"


List * initialize_list()
{
    List *my_list;

    my_list = (List *)malloc(sizeof(List));
    if(NULL == my_list) return LIST_MEM_ALLOC_FAIL;

    my_list->head = my_list->tail = NULL;
    my_list->count = 0;

    return my_list;
}

Node *get_node(int data)
{
    Node *new_node;

    new_node = (Node *)malloc(sizeof(Node));
    if(NULL == new_node) return NODE_MEM_ALLOC_FAIL;

    new_node->data = data;
    new_node->ptr = NULL;

    return new_node;
}
int insert_at_beg(List *my_list, int data)
{
    Node *new_node;

    new_node = get_node(data);

    if(new_node == NULL) return NODE_MEM_ALLOC_FAIL;

    //check if list is empty
    if(my_list->count == 0)
        my_list->head = my_list->tail = new_node;
    else
    {
        new_node->ptr = my_list->head;
        my_list->head = new_node;
    }
    my_list->count++;

    return SUCCESS;
}
int insert_at_end(List *, int);
int insert_after_element(List *, int, int after_element);
int insert_after_pos(List *, int, int pos);

int search_list(List *my_list, int element)
{
    Node *temp;
    if(my_list->count == 0) return NOT_FOUND;

    for(temp = my_list->head; temp != NULL; temp = temp->ptr)
        if(temp->data == element) return FOUND;
    return NOT_FOUND;
}

int max_min(List *my_list, int *max, int *min)
{
    Node *temp;
    *max=my_list->head->data;
    *min=my_list->head->data;
    if(my_list->count == 0) return FAIL;

    for(temp=my_list->head; temp!=NULL; temp =temp->ptr)
    {
        if(temp->data > *max)*max=temp->data;
        if(temp->data < *min)*min=temp->data;
    }

    return SUCCESS;
}

int total_sum(List *my_list)
{
    Node *temp;
    int sum=0;
    for(temp=my_list->head;temp!=NULL;temp=temp->ptr)
    {
        sum=sum+temp->data;
    }
    return sum;
}
int average(List *my_list)
{
    int avg;
    avg=total_sum(my_list)/my_list->count;
}