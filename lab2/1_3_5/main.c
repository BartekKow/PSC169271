#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wybor;
    double x, y, z, suma;
    printf("1-Podstawa i dlugosc \n2-Wszystkie boki \nPodaj liczbe: ");
    scanf("%d", &wybor);
    if(wybor==1)
    {
        printf("Podaj dlugosc podstawy: ");
        scanf("%lf", &x);
        printf("Podaj wysokosc: ");
        scanf("%lf", &y);
        suma=(x*y)/2.0;
        printf("%lf", suma);
    }
    else if(wybor==2)
    {
        printf("Podaj boki x, y, z: ");
        scanf("%lf %lf %lf",&x,&y,&z);
        double p=(x+y+z)/2.0;
        suma=sqrt(p*(p-x)*(p-y)*(p-z));
        printf("%lf", suma);
    }
    else
    {
        printf("Blad");
    }
    return 0;
}
