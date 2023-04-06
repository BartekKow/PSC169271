#include <stdio.h>
#include <stdlib.h>

double* foo(int n)
{
    return (double*)malloc(n*sizeof(double));
}

int main()
{
    double *tab=foo(5);
    *(tab)=9;
    printf("%lf",*tab);
    return 0;
}
