#include <stdio.h>
#include <stdlib.h>

int* wskaznik(int *x, int *y)
{
    if(*x>*y)
    {
        return y;
    }
    return x;
}

int main()
{
    int x = 12;
    int y = 55;
    printf("%p\n",wskaznik(&x,&y));
    return 0;
}
