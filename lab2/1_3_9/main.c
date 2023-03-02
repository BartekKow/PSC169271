#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, wynik;
    printf("Podaj x: ");
    scanf("%lf", &x);
    printf("Podaj y: ");
    scanf("%lf", &y);
    int operacja;
    printf("1-dodawanie \n2-odejmowanie \n3-mnozenie \n4-dzielenie \n5-potegowanie \nPodaj liczbe: ");
    scanf("%d", &operacja);
    while(operacja>0 && operacja<6)
    {
        if(operacja == 1)
        {
            wynik=x+y;
            printf("%lf", wynik);
            break;
        }
        else if(operacja == 2)
        {
            wynik=x-y;
            printf("%lf", wynik);
            break;
        }
        else if(operacja == 3)
        {
            wynik=x*y;
            printf("%lf", wynik);
            break;
        }
        else if(operacja == 4)
        {
            wynik=x/y;
            printf("%lf", wynik);
            break;
        }
        else if(operacja == 5)
        {
            wynik=x;
            for(int i=0;i<y;i++)
            {
                wynik*=x;
            }
            printf("%lf", wynik);
            break;
        }
        else
        {
            printf("Podaj liczbe 1-4");
            scanf("%d", &operacja);
        }
    }
}
