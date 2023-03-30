#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab1[], int tab2[], double tab3[])
{
    for(int i=0; i<n; i++)
    {
        tab3[i]=(double)tab1[i];
        tab3[n+i]=(double)tab2[i];
    }
}

int main()
{
    int tab[4]={1,2,3,4};
    int tab2[4]={5,6,7,8};
    double tab3[8];
    foo(4,tab,tab2,tab3);
    return 0;
}
