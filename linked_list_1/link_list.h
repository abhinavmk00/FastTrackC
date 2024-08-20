#include <stdlib.h>

struct _node_
{
    int data;
    struct _node_ *ptr;
};
typedef struct _node_ Node;

struct _list_
{
    Node *head, *tail;
    int count;
};
typedef struct _list_  List;

List* init_list();
Node* init_node(int data);
int insert_at_head(List *,int data);
int delete_node_at_pos(List *,int pos);