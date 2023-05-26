#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

void usun2(struct element *Lista, struct element *elem)
{
    struct element *wsk = elem->next;
    elem->next=wsk->next;
    free(wsk);
}

void wyswietl(struct element * lista)
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

int main() {
    struct element* lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 1;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 2;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = 3;
    lista->next->next->next->next = NULL;

    usun2(lista, lista->next);

    wyswietl(lista);

    while (lista != NULL) {
        struct element* temp = lista;
        lista = lista->next;
        free(temp);
    }
    return 0;
}
