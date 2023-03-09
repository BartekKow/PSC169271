#include <stdio.h>
#include <stdlib.h>

int funkcja(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return 1;
    }
    if(n%3==0)
    {
        return funkcja(n-1)+funkcja(n-2);
    }
    else  if(n%3==1)
    {
        return 5*funkcja(n-1)+4;
    }
    return funkcja(n-1);

}

int main()
{
    printf("%d", funkcja(5));
    return 0;
}
