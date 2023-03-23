#include <stdio.h>
#include <stdlib.h>

int funkcja(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else if(n%3==0)
    {
        return funkcja(n/3);
    }
    else if(n%3==1)
    {
        return funkcja((n-1)/3)+1;
    }
    return funkcja(n-1)-1;
}

int main()
{
    printf("%d\n",funkcja(7));
    printf("%d",funkcja(10));
    return 0;
}
