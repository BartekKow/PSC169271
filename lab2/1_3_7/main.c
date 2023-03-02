#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c;
    printf("Podaj a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a>0)
    {
        double delta=((b*b)-4*a*c);
        printf("Delta: %lf \n",delta);
        if(delta>0)
            {
                double x1=(-b+sqrt(delta))/2*a;
                double x2=(-b-sqrt(delta))/2*a;
                printf("x1: %lf \n", x1);
                printf("x2: %lf ", x2);
            }
        else if(delta=0)
            {
                double x0=-b/2*a;
                printf("x0: %lf", x0);
            }
        else
            {
                printf("Brak rozwiazania");
            }
    }
    else
    {
        printf("Rownanie nie jest kwadratowe");
    }
    return 0;
}
