#include <stdlib.h>
#include <assert.h>
#include "point.h"

int main()
{
    List* points;

    Point data;

    points = init_list();

    assert(points->head == NULL);
    assert(points->tail == NULL);
    assert(points->max == NULL);
    assert(points->count == 0);

    data.x=10;
    data.y=7;
    data.w=5;
    assert(SUCCESS == insert_list(points,data));

    data.x=11;
    data.y=5;
    data.w=8;
    assert(SUCCESS == insert_list(points,data));

    data.x=9;
    data.y=7;
    data.w=9;
    assert(SUCCESS == insert_list(points,data));

    assert(3 == points->count);
    assert(9 == points->max->point.w);
    assert(9 == points->head->point.w);

    return 0;
}

