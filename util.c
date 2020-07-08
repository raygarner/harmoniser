#include "interface.h"

/* returns the note a third above n */
int 
applyInterval(int n, int interval)
{
    return (n + interval) % 7;
}

