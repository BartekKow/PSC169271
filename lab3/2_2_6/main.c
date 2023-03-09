#include <stdio.h>
#include <stdlib.h>

int potega(int n, int m)
{
    if(m==0)
    {
        return 1;
    }
    int wynik=n;
    for(int i=1;i<m;i++)
    {
        wynik*=n;
    }
    return wynik;
}

int main()
{
    int n,m;
    printf("Podaj n i m: ");
    scanf("%d %d", &n, &m);
    printf("%d", potega(n,m));
    return 0;
}
