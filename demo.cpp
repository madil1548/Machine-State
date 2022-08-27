#include "demo.h"
static const demo_x    demo_m[] =
{
    {    0,          'T',        1}, 
    {    0,          'U',        2}, 
    {    0,          'V',        3}, 
};

static const int  demo =  
    sizeof(demo_m) / sizeof(demo_m[0]);


Table_Entry const *
table_begin(void)
{
    return &demo_m[0];
}


Table_Entry const *
table_end(void)
{
    return &demo_m[demo];
}  
