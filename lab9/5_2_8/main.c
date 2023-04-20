#include <stdio.h>
#include <stdlib.h>

void foo(char *napis)
{
    int i = 0;
    while(napis[i] != '\0')
    {
        if(napis[i] >= 'a' && napis[i] <= 'z')
        {
            napis[i] = napis[i] - 32;
        }
        i++;
    }
}

int main()
{
    char napis[] = "Napis";
    foo(napis);
    printf("%s", napis);
    return 0;
}
