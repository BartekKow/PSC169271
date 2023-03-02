#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    int i = 0;
    while(i*i <= n)
    {
        i++;
    }
    printf("%d", --i);
    return 0;
}
