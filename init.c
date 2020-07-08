#include "interface.h"

/* defines the chords */
int 
initChords()
{
    int i;

    for (i = I; i <= VII; i++) {
        chords[i][ROOT] = i;
        chords[i][THIRD] = applyInterval(i, III);  
        chords[i][FIFTH] = applyInterval(i, V);
    }

    return i;
}
