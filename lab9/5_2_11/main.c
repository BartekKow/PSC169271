#include <stdio.h>
#include <stdlib.h>

void wytnijzw(char napis1[], char napis2[])
{
    int i, j, k;
    for(i = 0, k = 0; napis1[i] != '\0'; i++)
    {
        for(j = 0; napis2[j] != '\0' && napis1[i] != napis2[j]; j++);
        if(napis2[j] == '\0')
        {
            napis1[k++] = napis1[i];
        }
    }
    napis1[k] = '\0';
}

int main()
{
    char napis1[]="Napis";
    char napis2[]="api";
    wytnijzw(napis1, napis2);
    printf("%s", napis1);
    return 0;
}
