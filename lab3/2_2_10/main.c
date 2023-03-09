#include <stdio.h>
#include <stdlib.h>

int dzielnik(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }
    return x;
}

int suma(int n)
{
    int wynik=0;
    for(int i=1; i<n; i++)
    {
        if(dzielnik(n,i)==1)
        {
            wynik+=i;
        }
    }
    return wynik;
}

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Wynik: %d",suma(n));
    return 0;
}
