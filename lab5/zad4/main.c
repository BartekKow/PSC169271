#include <stdio.h>
#include <stdlib.h>

int foo(const int *wsk1, int * const wsk2)
{
    return *wsk1-*wsk2;
}

int main()
{
    int wsk1=7;
    int wsk2=3;
    printf("%d",foo(&wsk1,&wsk2));
    return 0;
}
