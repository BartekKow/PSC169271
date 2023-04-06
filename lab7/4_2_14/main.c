#include <stdio.h>
#include <stdlib.h>

double* foo(int n)
{
    double *tab=(double*)malloc(n*sizeof(double));
    return tab;
}

int main()
{
    double *tab=foo(5);
    *(tab)=9;
    printf("%lf",*tab);
    return 0;
}
