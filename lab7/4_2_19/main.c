#include <stdio.h>
#include <stdlib.h>

int* foo(int n, int tab1[])
{
    int licznik=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]!=0)
        {
            licznik++;
        }
    }
    int *tab2=(int*)malloc(licznik*sizeof(int));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]!=0)
        {
            *(tab2+j)=tab1[i];
            j++;
        }
    }
    return tab2;
}

int main()
{
    int tab1[5] = {1, 0, 2, 0, 3};
    int n = 5;
    int* tab2 = foo(n, tab1);
    free(tab2);
    return 0;
}
