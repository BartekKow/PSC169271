#include <stdio.h>
#include <stdlib.h>

char* godzina(int godz, int min, int sek)
{
    char* napis = malloc(9 * sizeof(char));
    sprintf(napis, "%02d:%02d:%02d", godz, min, sek);
    return napis;
}

int main()
{
    int godz = 15, min = 23, sek = 47;
    char* napis = godzina(godz, min, sek);
    printf("%s", napis);
    free(napis);
    return 0;
}
