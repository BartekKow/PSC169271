#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int foo(int n)
{
    bool sito[n];
    int temp;
    for(int i=0;i<n;i++)
    {
        sito[i]=true;
    }
    for(int i=2;i<n;i++)
    {
        if(sito[i]==true)
        {
            temp=i;
            for(int x=2*i;x<n;x+=i)
            {
                sito[x]=false;
            }
        }
    }
    return temp;
}

int main()
{
    printf("%d",foo(7));
    return 0;
}
