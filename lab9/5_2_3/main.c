#include <stdio.h>
#include <stdlib.h>

int porownaj(char* napis1, char* napis2) {
    int i = 0;
    while (napis1[i] != '\0' || napis2[i] != '\0') {
        if (napis1[i] != napis2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    char napis1[]="Tekst";
    char napis2[]="Tekst";
    printf("%d", porownaj(napis1, napis2));
    return 0;
}
