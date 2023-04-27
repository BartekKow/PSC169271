#include <stdio.h>
#include <stdlib.h>

int** tablica(int n, int m)
{
    int** tab = malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        tab[i] = malloc(m * sizeof(int));
    }
    return tab;
}

int main()
{
    int** tab = tablica(5,7);
    printf("%p",tab);
    return 0;
}
