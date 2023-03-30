#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double foo(int n, double *tab1, double *tab2)
{
    double iloczyn=0;
    for(int i=0;i<n;i++)
    {
        iloczyn+=(*(tab1+i)*(*(tab2+i)));
    }
    return iloczyn;
}

int main()
{
    double tab1[3]={1,2,3};
    double tab2[3]={4,6,2};
    printf("%lf",foo(3,tab1,tab2));
    return 0;
}
