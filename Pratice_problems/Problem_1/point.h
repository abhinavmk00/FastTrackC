/*In an X-Y Plane there are N numbers of points. Each point has a weight associated with it.
Define the data structure for the above problem (10). Find the point with maximum weight in
O(1) time(5 ). Assuming all points are connected then count only the number of vertical and
horizontal lines (5+5). Deallocate all the memory before exiting the program and use assertions
to test the functionalities (5 Marks).*/

#include <stdlib.h>

#define INIT_LIST_FAIL NULL
#define SUCCESS 0

struct _point_
{
    int x,y,w;
};
typedef struct _point_ Point;

struct _node_
{
    Point point;
    struct _node_ *ptr;
};
typedef struct _node_ Node;

struct _list_
{
    Node *head;
    Node *tail;
    int count;
    Node *max;
};
typedef struct _list_ List;

List* init_list();
int insert_list(List *,Point data);