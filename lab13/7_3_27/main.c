#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element *minimum(struct element *lista)
{
    if((lista==NULL) || (lista->next==NULL))
    {
        return NULL;
    }
    struct element *min = NULL;
    struct element *wsk = lista;
    while(wsk->next != NULL)
    {
        if(((min==NULL) && (wsk->next->i<lista->i) || (min!=NULL)&&(wsk->next->i<min->next->i)))
        {
            min = wsk;
        }
        wsk = wsk->next;
    }
    return min;
}

struct element *minimum2(struct element *lista)
{
    if (lista == NULL || lista->next == NULL)
    {
        return lista;
    }
    struct element *min = lista;
    while(lista->next != NULL)
    {
        if(lista->next->i < min->next->i)
            min=lista;
        lista = lista->next;
    }
    return min;
}

int main()
{
    struct element *x = malloc(sizeof(struct element));
    x->i = 3;
    x->next = malloc(sizeof(struct element));
    x->next->i = 2;
    x->next->next = malloc(sizeof(struct element));
    x->next->next->i = 6;
    x->next->next->next = NULL;
    struct element *y = minimum(x);

    struct element *x2 = malloc(sizeof(struct element));
    x2->next = malloc(sizeof(struct element));
    x2->next->i = 2;
    x2->next->next = malloc(sizeof(struct element));
    x2->next->next->i = 6;
    x2->next->next->next = NULL;
    struct element *y2 = minimum(x2);
    return 0;
}



