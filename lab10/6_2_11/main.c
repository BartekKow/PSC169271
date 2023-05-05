#include <stdio.h>
#include <stdlib.h>

int foo(int tablica[][20], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 20; j++) {
            suma += tablica[i][j];
        }
    }
    return suma;
}

int main() {
    int tablica[3][20];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            tablica[i][j] = i + j;
        }
    }
    int suma = foo(tablica, 3);
    printf("%d", suma);
    return 0;
}
