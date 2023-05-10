#include <stdio.h>
#include <stdlib.h>

union super_int
{
    int x;
    unsigned int y;
} ;


int main()
{
    union super_int z;
    z.x = -42;
    printf("Liczba typu int: %d\n", z.x);
    z.y = 42;
    printf("Liczba typu unsigned int: %u", z.y);
    return 0;
}
