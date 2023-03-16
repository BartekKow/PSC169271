#include <stdio.h>
#include <stdlib.h>

double *funkcja(int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    double *wsk=funkcja(9);
    printf("%p",wsk);
    free(wsk);
    return 0;
}
