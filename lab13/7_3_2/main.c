#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

void wyczysc(struct element* Lista)
{
    struct element* wsk = Lista;
    while (Lista != NULL)
    {
        Lista = Lista->next;
        free(wsk);
        wsk = Lista;
    }
}

void wyswietl(struct element * lista)
{
    struct element * wsk = lista;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
}

int main()
{
    struct element* lista = malloc(sizeof(struct element));
    lista->i = 1;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 7;
    lista->next->next = NULL;
    wyswietl(lista);
    wyczysc(lista);
    return 0;
}
