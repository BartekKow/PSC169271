#include <stdio.h>
#include <stdlib.h>

void przypisz(const int *x, int *y)
{
    *y=*x;
}

int main()
{
    int x = 5;
    int y = 7;
    przypisz(&x,&y);
    printf("y = %d",y);
    return 0;
}
