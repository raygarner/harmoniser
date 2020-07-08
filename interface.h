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

enum pitch {
    I,
    II,
    III,
    IV,
    V,
    VI,
    VII
};

enum role {
    ROOT,
    THIRD,
    FIFTH,
};

typedef struct Note {
    float duration;
    int pitch;
} Note;

/* globals */
int chords[7][3];

/* init.c */
int initChords();

/* util.c */
int getThird(int n);

/* ui.c */
char *getIcon(int n);
int printChordDefs();

#endif
