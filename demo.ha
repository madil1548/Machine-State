#ifndef demo_h
#define demo_h

struct demo_x
{
     int  1st_state_id;
     char trans_letter;
     int  2nd_state_id;
};

demo_x const *    demo_begin(void);
demo_x const *    demo_end(void);
