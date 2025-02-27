#include<stdlib.h>
#include<assert.h>
#include"ticket.h"

int main()
{
    Result result;
    List *my_list;
    Theater *my_theater;

    
    my_list = init_list();

    assert(NULL == my_list->head);
    assert(NULL == my_list->tail);
    assert(0 == my_list->count);

    my_theater=add_theater(my_list,&result);
    assert(SUCCESS == result.status);
    assert(1 == my_list->count);



    return SUCCESS;
}