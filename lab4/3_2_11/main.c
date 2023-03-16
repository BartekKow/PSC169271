#include <stdio.h>
#include <stdlib.h>

int *funkcja(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int *wsk=funkcja(9);
    printf("%p",wsk);
    free(wsk);
    return 0;
}
