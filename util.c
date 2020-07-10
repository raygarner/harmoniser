#include "interface.h"

/* returns the note a third above n */
int 
applyInterval(int n, int i)
{
    return (n + i) % 7;
}

