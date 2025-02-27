
struct _node_
{
    char word[20];
    struct _node_ *ptr;
};
typedef struct _node_ Node;

struct _list_
{
    Node *head,*tail;
    int count;
};
typedef struct _list_ List;

List* init_list();
Node* init_node(char word[]);
int insert_at_head(List *my_list,char word[]);
int search(List *my_list,char word[]);
int unique_insert(List *my_list,char word[]);
int count(List *my_list);
