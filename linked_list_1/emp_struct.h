#define NAME_SIZE 30

struct _employee_
{
    int emp_id;
    char name[NAME_SIZE];
    int age;
    float salary;
};
typedef struct _employee_ Employee;

struct _department_
{
    int dept_id;
    char dept_name[NAME_SIZE];
};
typedef struct _department_ Department;

struct _employee_node_
{
    Employee data;
    struct _employee_node_ *ptr;
};
typedef struct _employee_node_ EmpNode;

struct _dept_node_
{
    Department data;
    struct _dept_ *ptr;
};
typedef struct _dept_node_ DeptNode;

struct _firm_
{
    EmpNode *emp_head;
    DeptNode *dep_head;
    int emp_count;
};
typedef struct _firm_ Firm;