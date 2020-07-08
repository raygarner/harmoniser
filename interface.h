#ifndef _INTERFACE
#define _INTERFACE

/* libs */
#include <stdio.h>

/* defs */
#define QUAVER 0.5
#define CROTCHET 1
#define DCROTCHET 1.5
#define MINIM 2
#define DMINIM 3
#define SEMIBRIEVE 4

#define MAXCHORDS 3

enum interval {
    SECOND = 1,
    THIRD,
    FOURTH,
    FIFTH,
    SIXTH,
    SEVENTH
};

typedef struct Note {
    float duration;
    int pitch; /* 1-7 */
} Note;

/* util.c */
int applyInterval(int n, int interval);

/* ui.c */

#endif
