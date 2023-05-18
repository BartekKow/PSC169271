#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

void wyczysc(struct element *lista)
{
    struct element *wsk = lista->next;
    lista = wsk;
    while(lista!=NULL)
    {
        lista = lista->next;
        free(wsk);
        wsk = lista;
    }
}

void wyswietl(struct element * lista)
{
    struct element * wsk = lista->next;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 7;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -4;
    lista->next->next->next->next = NULL;
    wyswietl(lista);
    wyczysc(lista);
}
