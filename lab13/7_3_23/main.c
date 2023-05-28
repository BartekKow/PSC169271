#include <stdio.h>
#include <stdlib.h>

struct trojka
{
    int a, b ,c;
    struct trojka *next;
};

int spr(struct trojka* x)
{
    if(x->a*x->a + x->b*x->b == x->c*x->c)
    {
        return 1;
    }
    return 0;
}

struct element * pitagoras(struct trojka* lista)
{
    struct trojka *wsk, *wsk2;
    while(lista != NULL && spr(lista) == 0)
    {
        wsk = lista;
        lista = lista->next;
        free(wsk);
    }
    if(lista == NULL)
    {
        return NULL;
    }
    wsk = lista;
    while(wsk->next != NULL)
    {
        if(spr(wsk->next))
        {
            wsk = wsk->next;
        }
        else
        {
            wsk2 = wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
    }
    return lista;
}

void pitagoras2(struct trojka *lista)
{
    struct trojka *wsk;
    while(lista->next != NULL)
    {
        if(spr(lista->next))
        {
            lista = lista->next;
        }
        else
        {
            wsk= lista->next;
            lista->next = wsk->next;
            free(wsk);
        }
    }
}

void wyswietlbez(struct trojka *lista)
{
    if (lista == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct trojka *wsk = lista;
    while (wsk != NULL)
    {
        printf("(%d, %d, %d)\n", wsk->a, wsk->b, wsk->c);
        wsk = wsk->next;
    }
    printf("---\n");
}

void wyswietlz(struct trojka *lista)
{
    if (lista->next == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct trojka *wsk = lista->next;
    while (wsk != NULL)
    {
        printf("(%d, %d, %d)\n", wsk->a, wsk->b, wsk->c);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct trojka *x = malloc(sizeof(struct trojka));
    x->a = 3;
    x->b = 5;
    x->c = 2;
    x->next = malloc(sizeof(struct trojka));
    x->next->a = 3;
    x->next->b = 4;
    x->next->c = 5;
    x->next->next = NULL;
    struct element * z = pitagoras(x);
    wyswietlbez(z);

    struct trojka *y = malloc(sizeof(struct trojka));
    y->next = malloc(sizeof(struct trojka));
    y->next->a = 3;
    y->next->b = 4;
    y->next->c = 5;
    y->next->next = malloc(sizeof(struct trojka));
    y->next->next->a = 3;
    y->next->next->b = 5;
    y->next->next->c = 2;
    y->next->next->next = NULL;
    pitagoras(y);
    wyswietlz(y);
    return 0;
}
