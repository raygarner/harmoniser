#ifndef _INTERFACE
#define _INTERFACE

/* libs */
#include <stdio.h>
#include <stdlib.h>

/* defs */
#define LAST -1
#define MAXCHORDS 3
#define LEN 256
#define PARTS 4

enum interval {
    SECOND = 1,
    THIRD,
    FOURTH,
    FIFTH,
    SIXTH,
    SEVENTH
};

enum voices {
    SOP,
    ALT,
    TEN,
    BAS
};

/* util.c */
int applyInterval(int note, int interval);

/* ui.c */
int readLine(int notes[]);
int printLine(int notes[]);

#endif
