#include<stdlib.h>
#include<assert.h>
#include "list.h"

int main()
{
    List *test;
    int min,max;

    test = initialize_list();
    assert(test->head == NULL);
    assert(test->head == test->tail);
    assert(test->count == 0);

    assert(insert_at_beg(test, 10));
    assert(insert_at_beg(test, 20));
    assert(insert_at_beg(test, 30));
    assert(insert_at_beg(test, 40));
    assert(insert_at_beg(test, 50));
    assert(insert_at_beg(test, 60));

    assert(test->count == 6);
    assert(test->head->data == 60);
    assert(test->head->ptr->ptr->ptr->data == 30);
    assert(test->tail->data == 10);

    assert(search_list(test, 10));
    assert(search_list(test, 20));
    assert(search_list(test, 50));
    assert(search_list(test, 60));
    assert(search_list(test, 20));
    assert(search_list(test, 70) == NOT_FOUND);

    assert(max_min(test,&max, &min)==SUCCESS);
    assert(max==60);
    assert(min==10);
    assert(total_sum(test)==210);
    assert(average(test)==35);

    return 0;
}
