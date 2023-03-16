#include <stdio.h>
#include <stdlib.h>

int *rezerwuj()
{
    return malloc(sizeof(int));
}

int main()
{
    int *x = rezerwuj();
    free(x);
    return 0;
}
