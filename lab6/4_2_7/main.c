#include <stdio.h>
#include <stdlib.h>

void foo1(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}

void foo2(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>tab2[i] || tab1[i]==tab2[i])
        {
            tab3[i]=tab1[i];
        }
        else
        {
            tab3[i]=tab2[i];
        }
    }
}

void foo3(int n, int tab1[], int tab2[], int tab3[])
{
    int temp1[n];
    int temp2[n];
    for (int i = 0; i < n; i++)
    {
        temp1[i] = tab1[i];
        temp2[i] = tab2[i];
        tab1[i] = tab3[i];
        tab2[i] = temp1[i];
        tab3[i] = temp2[i];
    }
}

int main()
{
    int tab1[4]={1,4,9,6};
    int tab2[4]={9,8,7,6};
    int tab3[4]={0,0,0,0};
    foo1(4,tab1,tab2,tab3);
    foo2(4,tab1,tab2,tab3);
    foo3(4,tab1,tab2,tab3);
    return 0;
}
