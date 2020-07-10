#include "interface.h"

int 
main(int argc, char **argv)
{
    /*
    int last, notes[LEN];
    
    last = readLine(notes);
    printLine(notes);
    */
    int notes[PARTS][LEN], last;

    readLine(notes[0]);
    readLine(notes[1]);
    readLine(notes[2]);
    readLine(notes[3]);
    printScore(notes);

    return 0;
}
