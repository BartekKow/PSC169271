#include <stdio.h>
#include <stdlib.h>

void foo(int ***tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
            {
                int temp = (*tab)[i][j];
                (*tab)[i][j] = (*tab)[j][i];
                (*tab)[j][i] = temp;
            }
    }
}

int main() {
    int n = 3;
    int** tab = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            tab[i][j] = i*n+j+1;
        }
    }
    printf("Przed zmiana miejscami:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    foo(&tab, n);

    printf("Po zmianie miejscami:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
