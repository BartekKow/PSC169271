#include <stdio.h>
#include <stdlib.h>

enum zwierzak
{
    pies,
    kot,
    mysz,
    chomik,
    zolw
};

int main()
{
    enum zwierzak x = kot;
    switch (x)
    {
    case pies:
        printf("Moj zwierzak to pies.\n");
        break;
    case kot:
        printf("Moj zwierzak to kot.\n");
        break;
    case mysz:
        printf("Moj zwierzak to mysz.\n");
        break;
    case chomik:
        printf("Moj zwierzak to chomik.\n");
        break;
    case zolw:
        printf("Moj zwierzak to zolw.\n");
        break;
    default:
        printf("Nieznany zwierzak.\n");
    }
    return 0;
}

