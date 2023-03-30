#include <stdio.h>
#include <stdlib.h>

void foo1(int n, int *tab)
{
    int tab2[n];
    for(int i=0;i<n;i++)
    {
        tab2[i]=*(tab+i);
    }
    for(int i=0;i<n;i++)
    {
        *(tab+i)=tab2[n-1-i];
    }
}

void foo2(int n, int *tab)
{
    int temp=*(tab+0);
    for(int i=0;i<n-1;i++)
    {
        *(tab+i)=*(tab+i+1);
    }
    *(tab+n-1)=temp;
}

void foo3(int n, int *tab)
{
    int temp=*(tab+n-1);
    for(int i=n-2;i>=0;i--)
    {
        *(tab+i+1)=*(tab+i);
    }
    *(tab)=temp;
}

void foo4(int n, int *tab)
{
    int temp;
    int temp2;
    for(int i=0;i<n;i++)
    {
        temp2=i;
        for(int j=i+1;j<n;j++)
        {
            if(*(tab+j)<*(tab+temp2))
            {
                temp2=j;
            }
        }
        if(temp2 != i)
        {
            temp=*(tab+i);
            *(tab+i)=*(tab+temp2);
            *(tab+temp2)=temp;
        }
    }
}

void foo5(int n, int *tab)
{
    int temp;
    int temp2;
    for(int i=0;i<n;i++)
    {
        temp2=i;
        for(int j=i+1;j<n;j++)
        {
            if(*(tab+j)>*(tab+temp2))
            {
                temp2=j;
            }
        }
        if(temp2 != i)
        {
            temp=*(tab+i);
            *(tab+i)=*(tab+temp2);
            *(tab+temp2)=temp;
        }
    }
}

int main()
{
    //a)
    int tab[6]={11,7,1,9,12,20};
    foo1(6,tab);
    //b)
    foo2(6,tab);
    //c)
    foo3(6,tab);
    //d)
    foo4(6,tab);
    //e)
    foo5(6,tab);
    return 0;
}
