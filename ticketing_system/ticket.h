#include<stdlib.h>

#define SEAT_SIZE 50
#define PHONE_SIZE 10
#define NAME_SIZE 30
#define SHOW_SIZE 6

#define SUCCESS 0
#define FAILURE -1
#define THEATER_MEM_ALLOC_FAIL -1
#define LIST_MEM_ALLOC_FAIL NULL
#define EMPTY_LIST NULL

struct _result_
{
    int status;
};
typedef struct _result_ Result;

struct _seat_
{
    char phone[PHONE_SIZE];
    char name[NAME_SIZE];
    int status;
};
typedef struct _seat_ Seat;

struct _type_
{
    Seat seats[SEAT_SIZE];
    int price;
    int c_size;
    int t_size;
};
typedef struct _type_ Type;

struct _screen_
{
    Type *silver;
    Type *gold;
    Type *vip;
};
typedef struct _screen_ Screen;

struct _show_
{
    int time;
    Screen *screen;
};
typedef struct _show_ Show;

struct _theater_
{
    Show *show;
    struct _theater_ *ptr;
};
typedef struct _theater_ Theater;

struct _list_
{
    Theater *head;
    Theater *tail;
    int count;
};
typedef struct _list_ List;

List *init_list();
Theater *add_theater(List *,Result *);
int add_show(List *,Result *);



