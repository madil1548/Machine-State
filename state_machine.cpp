#include "demo.h"
#include <iostream>

using namespace std; 

void
Execute_State_Machine(void)
{
     int 1st_state = 0;
    while (1)
    {
        char trans_letter;
        cout << "1st state: " << 1st_state << "\n";
        cout << "Enter trans letter: ";
        cin >> trans_letter;
        cin.ignore(100, '\n'); 
        demo_Entry const *  bn = demo_begin();
        demo_Entry const * const  p_demo_end =  demo_end();
        bool demo_um = false;
        while ((!demo_um) && (bn != p_demo_end))
        {
            if (bn->1st_state_id == 1st_state)
            {
                if (bn->trans_letter == trans_letter)
                {
                    cout << "changing"
                         << " from 1st " << 1st_state
                         << ", to 2nd " << bn->pro_state_id
                         << "\n";
                    1st_state = bn->pro_state_id;
                    demo_um = true;
                    break;
                }
             }
             ++bn;
         }
         if (!demo_um)
         {
             cerr << "Not changed\n";
         }
    }
}
