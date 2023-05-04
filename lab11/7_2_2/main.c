#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    double a, b, c;
};

void foo(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2 = troj1;
}

int main()
{
    struct trojkat x = {3, 6, 9};
    struct trojkat y = {1, 9, 5};
    foo(x, &y);
    printf("%lf %lf %lf", y.a, y.b, y.c);
    return 0;
}
