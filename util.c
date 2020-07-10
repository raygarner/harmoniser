#include "interface.h"

/* returns the note a third above n */
int 
applyInterval(int n, int i)
{
    return (n + i) % 7;
}

/* adds the accompanying parts to the sop line */
int
addATB(int notes[][MAX], int len)
{

}

/* adds the notes for ATB for one beat to the score */
int
addOneChord(int notes[][MAX], int pos)
{

}
