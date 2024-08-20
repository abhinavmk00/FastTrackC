#include <stdlib.h>
#include "link_list.h"

List* init_list()
{
    List *my_list;

    my_list=(List *) malloc(sizeof(List));
    if(my_list == NULL)free(my_list);

    my_list->head = NULL;
    my_list->tail = NULL;
    my_list->count= 0;
    return my_list;
}

Node* init_node(int data)
{
    Node *my_node;

    my_node=(Node *)malloc(sizeof(Node));
    if(my_node==NULL)free(my_node);

    my_node->data=data;
    my_node->ptr=NULL;

    return my_node;
}

int insert_at_head(List *my_list,int data)
{
    Node *my_node;
    my_node=init_node(data);
    if (my_list->head==NULL && my_list->tail==NULL)
    {
        my_list->head=my_node;
        my_list->tail=my_node;
    }
    else
    {
        my_node->ptr=my_list->head;
        my_list->head=my_node;
    }
    my_list->count++;
    return 0;
}

int delete_node_at_pos(List *my_list,int pos)
{
    Node *ptr_l;
    ptr_l=my_list->head->ptr;
    for(int i=0;i<pos-1;i++)
    {
        ptr_l=ptr_l->ptr;
    }
    ptr_l=ptr_l->ptr->ptr;
    my_list->count--;
    return 0;
}