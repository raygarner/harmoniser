#ifndef _INTERFACE
#define _INTERFACE

/* libs */
#include <stdio.h>
#include <stdlib.h>

/* defs */
#define LAST -1
#define MAXCHORDS 3
#define MAX 256
#define PARTS 4

enum interval {
    SECOND = 1,
    THIRD,
    FOURTH,
    FIFTH,
    SIXTH,
    SEVENTH
};

/* util.c */
int applyInterval(int note, int interval);
int addATB(int notes[PARTS][MAX], int len);

/* ui.c */
int readLine(int notes[]);
int printLine(int notes[]);
int printScore(int notes[][MAX]);

#endif
