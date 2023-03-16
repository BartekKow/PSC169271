#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *x, int *y)
{
    if(*x>*y)
    {
        return *y;
    }
    return *x;
}

int main()
{
    int x=4;
    int y=9;
    printf("%d",mniejsza(&x,&y));
    return 0;
}
