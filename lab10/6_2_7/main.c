#include <stdio.h>
#include <stdlib.h>

int **foo(int n)
{
    int** tab = malloc(n* sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        tab[i] = malloc((i+1) * sizeof(int));
    }
    return tab;
}

int main()
{
    int** tab = foo(5);
    printf("%p",tab);
    return 0;
}
