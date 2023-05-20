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

int main()
{
    return 0;
}
