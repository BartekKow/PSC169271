#include <stdio.h>
#include <stdlib.h>

void przypisz(int n, int *w)
{
    *w=n;
}

int main()
{
    int n=55;
    int x=0;
    przypisz(n, &x);
    printf("%d", x);
    return 0;
}
