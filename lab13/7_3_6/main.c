#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element *znajdz(struct element* Lista, int a)
{
    while((Lista != NULL) && Lista->i!=a)
    {
        Lista = Lista->next;
    }
    return Lista;
}

struct element * wyczysc(struct element * lista)
{
    struct element * wsk = lista;
    struct element * wsk2 = wsk;
    while(wsk!= NULL)
    {
        wsk=wsk->next;
        free(wsk2);
        wsk2=wsk;
    }
    return NULL;
}

int main()
{
    struct element *lista = malloc(sizeof(struct element));
    lista->i = 1;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 2;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 3;
    lista->next->next->next = NULL;
    struct element *x = znajdz(lista, 2);
    printf("%d", x->i);
    lista = wyczysc(lista);
}
