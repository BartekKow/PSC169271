#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    //a)
    int x=0;
    while((abs(a)*(x*x)+b*x+c)<d)
    {
        x++;
    }
    printf("a) %d\n", x);
    //b)
    x=0;
    while(5*(x*x)+a*x+b<c)
    {
        x++;
    }
    printf("%db)", x);
}
