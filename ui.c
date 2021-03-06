#include "interface.h"

/* reads a melody from the user */
int
readLine(int notes[])
{
    char c;
    int i = 0;

    printf("Enter the melody (1234567):\n|| ");

    while ((c = getchar()) != '\n') {
        notes[i] = atoi(&c);
        i++;

        if (i >= MAX - 1)
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

/* prints the entire score to the screen */
int
printScore(int notes[PARTS][MAX])
{
    int i;

    for (i = 0; i < PARTS; i++) {
        printLine(notes[i]);
    }

    return i;
}
