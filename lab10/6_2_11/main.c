#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int tab[][m])
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            suma += tab[i][j];
        }
    }
    return suma;
}

int main() {
    int tablica[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tablica[i][j] = i * 4 + j;
        }
    }
    int suma = foo(2, 4, tablica);
    printf("%d", suma);
    return 0;
}
