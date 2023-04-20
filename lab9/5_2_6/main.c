#include <stdio.h>
#include <stdlib.h>

void kopiujn(char *nap1, char *nap2, int n) {
    int i;
    for (i = 0; i < n && nap1[i] != '\0'; i++) {
        nap2[i] = nap1[i];
    }
    nap2[i] = '\0';
}

int main()
{
    char nap1[] = "Jakis tekst";
    char nap2[20] = "";
    kopiujn(nap1, nap2, 7);
    printf("%s", nap2);
    return 0;
}
