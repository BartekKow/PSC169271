#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool funkcja(int (*f1)(int), int (*f2)(int), unsigned int n)
{
    for(int i=0;i<=n;i++)
    {
        if(f1(i)!=f2(i))
        {
            return false;
        }
    }
    return true;
}

int f1(int n)
{
    n++;
    return n;
}

int f2(int n)
{
    return n+1;
}

int main()
{
    printf("%d", funkcja(f1,f2,5));
    return 0;
}
