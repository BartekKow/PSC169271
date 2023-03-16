#include <stdio.h>
#include <stdlib.h>

double *rezerwuj()
{
    return malloc(sizeof(double));
}

int main()
{
    double *x = rezerwuj();
    free(x);
    return 0;
}
