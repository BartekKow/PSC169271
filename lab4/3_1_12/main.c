#include <stdio.h>
#include <stdlib.h>

double *funkcja(int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    int n=9;
    printf("%p",funkcja(n));
    return 0;
}
