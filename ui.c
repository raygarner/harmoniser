#include "interface.h"

/* reads a melody from the user */
int
readLine(int notes[])
{
    char c;
    int i = 0;

    while ((c = getchar()) != '\n') {
        notes[i] = atoi(&c);
        i++;

        if (i >= LEN - 1)
            break;
    }
    
    notes[i] = LAST;
    return i;
}

/* prints a melody to the screen */
int
printLine(int notes[])
{
    int i = 0;

    while (notes[i] != LAST) {
        printf("%d ", notes[i]);
        i++;
    }
    
    putchar('\n');
    return i;
}
