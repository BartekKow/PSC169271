#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

struct element* foo(struct element* lista)
{
    struct element* wsk1 = NULL;
    struct element* wsk2 = lista;
    while (wsk2 != NULL) {
        struct element* temp = wsk2->next;
        wsk2->next = wsk1;
        wsk1 = wsk2;
        wsk2 = temp;
    }
    return wsk1;
}

struct element* foo2(struct element* lista)
{
    struct element* wsk1 = NULL;
    struct element* wsk2 = lista->next;
    while (wsk2 != NULL) {
        struct element* temp = wsk2->next;
        wsk2->next = wsk1;
        wsk1 = wsk2;
        wsk2 = temp;
    }
    lista->next = wsk1;
    return lista;
}

void wyswietlbez(struct element * lista)
{
    if (lista == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct element * wsk = lista;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}

void wyswietlz(struct element * lista)
{
    if (lista->next == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct element * wsk = lista->next;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element* x = malloc(sizeof(struct element));
    x->i = 1;
    x->next = malloc(sizeof(struct element));
    x->next->i = 2;
    x->next->next = malloc(sizeof(struct element));
    x->next->next->i = 3;
    x->next->next->next = NULL;
    struct element* y = foo(x);
    printf("Lista po odwroceniu:\n");
    wyswietlbez(y);

    struct element *x2 = malloc(sizeof(struct element));
    x2->next = malloc(sizeof(struct element));
    x2->next->i = 2;
    x2->next->next = malloc(sizeof(struct element));
    x2->next->next->i = 6;
    x2->next->next->next = NULL;
    struct element* y2 = foo2(x2);
    printf("Lista po odwroceniu:\n");
    wyswietlz(y2);
    return 0;
}
