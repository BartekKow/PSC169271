#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    int silnia=x;
    if(x==0)
    {
        silnia=1;
        printf("%d", silnia);
    }
    else
    {
        for(int i=x-1;i>0;i--)
        {
            silnia*=i;;
        }
        printf("Silnia: %d",silnia);
    }
}
