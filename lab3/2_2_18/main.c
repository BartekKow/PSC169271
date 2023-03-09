#include <stdio.h>
#include <stdlib.h>

int losowe(int n)
{
    if(n==1)
    {
        return 1;
    }
    return 1-losowe((n-1)*(n-1));
}

int main()
{
    printf("%d", losowe(10));
    return 0;
}
