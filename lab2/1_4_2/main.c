#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, wielo;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);
    for(int i=1 ; i<=m ; i++)
    {
        wielo=n*i;
        printf("%d ", wielo);
    }
}
