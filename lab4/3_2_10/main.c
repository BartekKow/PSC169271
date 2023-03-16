#include <stdio.h>
#include <stdlib.h>

int *rezerwuj()
{
    return malloc(sizeof(double));
}

int main()
{
    double *x = rezerwuj();
    return 0;
}
