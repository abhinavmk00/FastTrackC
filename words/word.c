#include <stdlib.h>
#include <string.h>
#include "word.h"

#define NOT_FOUND  0
#define FOUND   1

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

Node* init_node(char word[])
{
    Node *my_node;

    my_node=(Node *)malloc(sizeof(Node));
    if(my_node==NULL)free(my_node);

    strcpy(word,my_node->word);
    my_node->ptr=NULL;

    return my_node;
}

int insert_at_head(List *my_list,char word[])
{
    Node *my_node;
    my_node=init_node(word);
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

int search(List *my_list,char word[])
{
    Node *temp;
    if(my_list->count == 0) return NOT_FOUND;

    for(temp = my_list->head; temp != NULL; temp = temp->ptr)
        if(strcmp(word,temp->word)) return FOUND;
    return NOT_FOUND;
}

int unique_insert(List *my_list,char word[])
{
    if(search(my_list,word)==NOT_FOUND)insert_at_head(my_list,word);
}

int count(List *my_list)
{
    Node *temp;
    int count=0;

    for(temp = my_list->head; temp != NULL; temp = temp->ptr)
        if(temp->word[0]=='A'||temp->word[0]=='a') count++;
    
    return count;
}
