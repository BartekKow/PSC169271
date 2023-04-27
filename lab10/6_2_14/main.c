#include <stdio.h>
#include <stdlib.h>

int foo(int tab[][20][20])
{
    int suma = 0;
    for (int i=0; i<20; i++)
    {
        for (int j=0; j<20; j++)
        {
            for (int k=0; k<20; k++)
            {
                suma += tab[i][j][k];
            }
        }
    }
    return suma;
}

int main()
{
    int tablica[20][20][20];
    for (int i=0; i<20; i++)
    {
        for (int j=0; j<20; j++)
        {
            for (int k=0; k<20; k++)
            {
                tablica[i][j][k] = i % 2;
            }
        }
    }
    printf("%d", foo(tablica));
    return 0;
}
