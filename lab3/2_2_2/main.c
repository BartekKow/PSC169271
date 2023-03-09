#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return n*silnia(n-1);
}

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("silnia z n = %d", silnia(n));
    return 0;
}
