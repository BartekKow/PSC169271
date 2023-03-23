#include <stdio.h>
#include <stdlib.h>

int funkcja(int (*f1)(int x), int (*f2)(int x), int n)
{
    return f1(n)+f2(n);
}

int f1(int x)
{
    return x*x;
}

int f2(int x)
{
    return x+x;
}

int main()
{
    printf("%d\n", funkcja(f1,f2,5));
    printf("%d", funkcja(f1,f2,1));
    return 0;
}
