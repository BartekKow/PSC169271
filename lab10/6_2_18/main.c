#include <stdio.h>
#include <stdlib.h>

void foo(int n, int m, int **tab)
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

int main()
{
    int** tablica = malloc(3 * sizeof(int*));
    for (int i = 0; i < 3; i++) {
        tablica[i] = malloc(4 * sizeof(int));
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            tablica[i][j] = i + j;
        }
    }
    foo(3, 4, tablica);
    for (int i = 0; i < 3; i++) {
        free(tablica[i]);
    }
    free(tablica);
    return 0;
}
