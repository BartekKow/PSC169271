#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ksiazka
{
    char tytul[50];
    int liczba_stron;
};

struct Ksiazka * initKsiazka(char tytul[60], int liczba_stron)
{
    if(strlen(tytul) < 5 || liczba_stron <= 50)
    {
        return NULL;
    }
    struct Ksiazka *k = malloc(sizeof(struct Ksiazka));
    k->liczba_stron = liczba_stron;
    int i = 0;
    while (tytul[i] != 0 && i < 49)
    {
        k->tytul[i] = tytul[i];
        i++;
    }
    k->tytul[i] = 0;
    return k;
}

void pokazKsiazka(struct Ksiazka x)
{
    printf("Tytul: %s\nLiczba stron: %d\n", x.tytul, x.liczba_stron);
}

void dodajStrony(struct Ksiazka * x)
{
    x->liczba_stron += 10;
}

int main()
{
    struct Ksiazka *k1 = initKsiazka("Ksiega", 200);
    pokazKsiazka(*k1);
    dodajStrony(k1);
    pokazKsiazka(*k1);
    free(k1);
    return 0;
}
