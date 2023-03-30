#include <stdio.h>
#include <stdlib.h>

void zamiana(int *x, int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
}

int main()
{
    int x = 9;
    int y = 33;
    zamiana(&x,&y);
    printf("x = %d\ny = %d",x,y);
    return 0;
}
