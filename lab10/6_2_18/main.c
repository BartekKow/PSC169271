#include <stdio.h>
#include <stdlib.h>

void foo(int n, int m, int tab[][m])
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
    int tab[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    foo(3,4,tab);
    return 0;
}
