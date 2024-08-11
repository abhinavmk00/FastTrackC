#define LIST_MEM_ALLOC_FAIL NULL
#define NODE_MEM_ALLOC_FAIL NULL
#define SUCCESS 1
#define FAIL 0
#define FOUND 1
#define NOT_FOUND 0

struct _node_
{
    int data;
    struct _node_ *ptr;
};
typedef struct _node_ Node;


struct _linked_list_
{
    Node *head, *tail;
    int count;
};
typedef struct _linked_list_ List;

List * initialize_list();
int insert_at_beg(List *, int);
int insert_at_end(List *, int);
int insert_after_element(List *, int, int after_element);
int insert_after_pos(List *, int, int pos);
int search_list(List *, int);

// Assignment
int max_min(List *, int *max, int *min);
int total_sum(List *);
int average(List *);
