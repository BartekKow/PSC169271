#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element* znajdz(struct element *lista, int a)
{
    while((lista != NULL) && lista->i != a)
    {
        lista = lista->next;
    }
    return lista;
}

struct element * wyczysc(struct element * lista)
{
    struct element * wsk = lista->next;
    struct element * wsk2 = wsk;
    while(wsk!= NULL)
    {
        wsk=wsk->next;
        free(wsk2);
        wsk2=wsk;
    }
    lista->next = NULL;
}

int main()
{
    struct element *lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 1;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 2;
    lista->next->next->next = malloc(sizeof(struct element));;
    lista->next->next->next->i = 3;
    lista->next->next->next->next = NULL;
    struct element *x = znajdz(lista, 3);
    printf("%d", x->i);
    lista = wyczysc(lista);
}
