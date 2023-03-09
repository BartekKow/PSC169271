#include <stdio.h>
#include <stdlib.h>

int funkcja(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return funkcja(n-1)+2*funkcja(n-2)+3;
}

int main()
{
    printf("%d\n", funkcja(1));
    printf("%d\n", funkcja(2));
    printf("%d\n", funkcja(3));
    printf("%d\n", funkcja(4));
    return 0;
}
