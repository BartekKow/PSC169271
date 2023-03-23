#include <stdio.h>
#include <stdlib.h>

double funkcja(double (*zwroc)(int), int x)
{
    return zwroc(x);
}

double zwroc(int n)
{
    return (double)(n*n);
}

int main()
{
    printf("%lf", funkcja(zwroc,7));
    return 0;
}
