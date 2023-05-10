#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double im;
    double re;
} Zespolona;

Zespolona dodaj(Zespolona x, Zespolona y)
{
    Zespolona suma;
    suma.im = x.im + y.im;
    suma.re = x.re + y.re;
    return suma;
}

int main()
{
    Zespolona z1 = {1.0, 2.0}; // z1 = 1 + 2i
    Zespolona z2 = {3.0, 4.0}; // z2 = 3 + 4i
    Zespolona wynik = dodaj(z1, z2); // suma = 4 + 6i
    printf("%lf + %lfi", wynik.re, wynik.im);
    return 0;
}
