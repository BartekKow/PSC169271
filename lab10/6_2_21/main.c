#include <stdio.h>
#include <stdlib.h>

void foo(int n, int m, int tab[][m])
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

int main()
{
    int tab[2][3] = {{1,2,3},{4,5,6}};
    foo(2, 3, tab);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
