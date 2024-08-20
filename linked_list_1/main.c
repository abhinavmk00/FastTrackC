#include <stdlib.h>
#include <assert.h>
#include "link_list.h"

int main()
{
    List *my_list;

    my_list = init_list();
    assert(my_list->count == 0);
    assert(my_list->head == NULL);
    assert(my_list->tail == NULL);

    insert_at_head(my_list,20);
    insert_at_head(my_list,30);
    insert_at_head(my_list,40);
    insert_at_head(my_list,50);
    insert_at_head(my_list,60);

    assert(my_list->head->data==60);
    assert(my_list->tail->data==20);
    assert(my_list->count ==5);

    delete_node_at_pos(my_list,2);
    assert(my_list->count==4);
    assert(my_list->head->ptr->ptr->ptr->data==30);


    return 0;
}