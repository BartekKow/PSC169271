#include <stdio.h>
#include <stdlib.h>

void zero(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i)=0;
    }
}

void indeks(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i)=i;
    }
}

void podwojenie(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i)*=2;
    }
}

void bezwzgledna(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        if(*(tab+i)<0)
        {
            *(tab+i)*=-1;
        }
    }
}

int main()
{
    //a)
    int tab1[4]={3,6,7,2};
    zero(4,tab1);
    //b)
    int tab2[4]={11,5,8,3};
    indeks(4,tab2);
    //c)
    int tab3[4]={20,1,0,42};
    podwojenie(4,tab3);
    //d)
    int tab4[4]={-2,-6,4,-1};
    bezwzgledna(4,tab4);
    return 0;
}
