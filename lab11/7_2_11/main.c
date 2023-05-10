#include <stdio.h>
#include <stdlib.h>

union Liczba
{
    double w;
    int c;
};

struct Dane
{
    int tp;
    union Liczba zaw;
};

struct Dane foo(void)
{
    struct Dane dane;
    printf("Wpisz: 0 - liczba calkowita, 1 - liczba wymierna\n");
    scanf("%d", &dane.tp);
    if(dane.tp == 0)
    {
        printf("Wpisz liczbe: ");
        scanf("%d", &dane.zaw.c);
    }
    else if(dane.tp == 1)
    {
        printf("Wpisz liczbe: ");
        scanf("%lf", &dane.zaw.w);
    }
    return dane;
}

int main()
{
    struct Dane dane = foo();
    if (dane.tp == 0) {
        printf("Wpisano liczbe calkowita: %d\n", dane.zaw.c);
    } else if (dane.tp == 1) {
        printf("Wpisano liczbe wymierna: %lf\n", dane.zaw.w);
    }
    return 0;
}
