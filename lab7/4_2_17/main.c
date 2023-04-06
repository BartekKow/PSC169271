#include <stdio.h>
#include <stdlib.h>

double* foo(int n, double tab[])
{
    double *tab2=(double*)malloc(n*sizeof(double));
    if (tab2==NULL)
    {
        return NULL;
    }
    for(int i=0;i<n;i++)
    {
        *(tab2+i)=*(tab+i);
    }
    return tab2;
}

int main()
{
    double tab[] = {1.0, -2.5, 3.0};
    int n = 3;
    double* tab2 = foo(n, tab);
    for (int i = 0; i < n; i++) {
        printf("%lf\n", *(tab2+i));
    }
}
