#include "interface.h"

int 
main(int argc, char **argv)
{
    /*
    int last, notes[LEN];
    
    last = readLine(notes);
    printLine(notes);
    */
    int notes[PARTS][MAX], last;

    readLine(notes[0]);
    printScore(notes);

    return 0;
}
