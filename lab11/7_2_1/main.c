#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a, b, c;
};

double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}

int main()
{
    struct trojkat x = {3, 6, 9};
    printf("%lf", obwod(x));
    return 0;
}
