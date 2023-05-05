#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int n, int m)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m/2; j++)
        {
            temp = tab[i][j];
            tab[i][j] = tab[i][m-j-1];
            tab[i][m-j-1] = temp;
        }
    }
}

void wypisz(int **tab, int n, int m)
{
    for (int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 3;
    int m = 4;
    int **tablica = malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++) {
        tablica[i] = malloc(4 * sizeof(int));
        for (int j = 0; j < 4; j++) {
            tablica[i][j] = i + j;
        }
    }
    wypisz(tablica, 3, 4);
    foo(tablica, 3, 4);
    printf("\n");
    wypisz(tablica, 3, 4);
    for (int i = 0; i < 3; i++)
    {
        free(tablica[i]);
    }
    free(tablica);
    return 0;
}
