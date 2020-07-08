#ifndef _INTERFACE
#define _INTERFACE

/* libs */
#include <stdio.h>

/* defs */
#define END -1
#define MAXCHORDS 3
#define MAXLEN 256
#define VOICES 4

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
int applyInterval(int n, int interval);

/* ui.c */

#endif
