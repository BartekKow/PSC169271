#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    while(n<2)
    {
        printf("Podaj n: ");
        scanf("%d", &n);
    }
    int iloczyn=1;
    for(int i=2 ; i<=n ; i=i+2)
    {
        iloczyn*=i;
    }
    printf("%d", iloczyn);
}
