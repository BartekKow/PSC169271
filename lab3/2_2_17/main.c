#include <stdio.h>
#include <stdlib.h>

int i=0;

void wywolania()
{
    i++;
    printf("%d\n", i);
}

int main()
{
    wywolania();
    wywolania();
    wywolania();
    wywolania();
}
