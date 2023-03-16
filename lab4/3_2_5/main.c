#include <stdio.h>
#include <stdlib.h>

int suma(int *x, int *y)
{
    int sum=*x+*y;
    return sum;
}

int main()
{
    int x = 20;
    int y = 11;
    printf("%d",suma(&x,&y));
    return 0;
}
