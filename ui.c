#include "interface.h"

char *
getIcon(int n)
{
    switch(n) {
    case I :
        return "I  ";

    case II :
        return "II ";

    case III :
        return "III";

    case IV :
        return "IV ";

    case V :
        return "V  ";

    case VI :
        return "VI ";

    case VII :
        return "VII";

    default :
        return "???";
    }
}

/* prints the chords defined by init */
int
printChordDefs()
{
    int i;

    for (i = I; i <= VII; i++) {
        printf("%s  %s  %s\n", getIcon(chords[i][ROOT]), \
            getIcon(chords[i][THIRD]), \
            getIcon(chords[i][FIFTH]));
    }

    return i;
}
