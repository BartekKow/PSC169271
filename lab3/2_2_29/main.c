#include <stdio.h>
#include <stdlib.h>

int dzielnik(int n, int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    else if(n==m)
    {
        return n;
    }
    return dzielnik(n > m ? n - m : n, m > n ? m - n : m);
}

int main()
{
    printf("%d \n", dzielnik(8,8));
    printf("%d \n", dzielnik(90,21));
    printf("%d \n", dzielnik(0,7));
    return 0;
}
