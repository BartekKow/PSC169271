#include <stdio.h>
#include <stdlib.h>

void foo(double* tab)
{
    free(tab);
}

int main()
{
    return 0;
}
