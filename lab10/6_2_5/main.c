#include <stdio.h>
#include <stdlib.h>

int*** tablica(int n, int m, int k)
{
    int*** tab = malloc(n * sizeof(int**));
    for (int i = 0; i < n; i++)
    {
        tab[i] = malloc(m * sizeof(int*));
        for (int j = 0; j < m; j++)
        {
            tab[i][j] = malloc(k * sizeof(int));
        }
    }
    return tab;
}

void zwolnij(int ***tab, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            free(tab[i][j]);
        }
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    int*** tab = tablica(5,7,6);
    printf("%p",tab);
    zwolnij(tab, 5, 7);
    return 0;
}
