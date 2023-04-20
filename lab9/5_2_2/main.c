#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *napis)
{
    int i = 0;
    while(napis[i] != 0)
    {
        i++;
    }
    return i;
}

int dlugosc2(wchar_t *napis)
{
    int i = 0;
    while(napis[i] != 0)
    {
        i++;
    }
    return i;
}

int main()
{
    char napis1[] = "Tekst";
    wchar_t napis2[] = L"Tekst";
    printf("%d\n", dlugosc(napis1));
    printf("%d\n", dlugosc2(napis2));
    return 0;
}
