#include <stdio.h>
#include <stdlib.h>

void zamiana(int *x, int *y)
{
    if(*x>*y)
    {
        int z=*x;
        *x=*y;
        *y=z;
        printf("x = %d\ny = %d",*x,*y);
    }
    else
    {
        printf("x = %d\ny = %d",*x,*y);
    }
}

int main()
{
    int x = 113;
    int y = 76;
    zamiana(&x,&y);
    return 0;
}
