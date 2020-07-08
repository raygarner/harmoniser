#include "interface.h"

/* returns the note a third above n */
int 
getThird(int n)
{
    return (n + 2) % 7;
}
