#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

    //a)
    int x=0;
    double y=abs(a)*(x*x)+b*x+c;
    if(a==0 && b==0 && c==0 && d==0)
    {
        printf("a) Brak rozwiazan \n");
    }
    else if(y<=d)
    {
        while((abs(a)*(x*x)+b*x+c)<=d)
            {
                x++;
            }
        printf("a) %d\n", x);
    }
    else
    {
        printf("a) %d\n", x);
    }

    //b)
    x=0;
    y=5*(x*x)+a*x+b;
    if(y<c)
    {
        while(5*(x*x)+a*x+b<c)
        {
            x++;
        }
        printf("b) %d\n", x-1);
    }
    else if(y>c && a<0)
    {
        while(5*(x*x)+a*x+b>c)
        {
            x++;
        }
        printf("b) %d\n", x);
    }
    else if(y==c)
    {
        x++;
        if(5*(x*x)+a*x+b<c)
        {
            while(5*(x*x)+a*x+b<c)
            {
                x++;
            }
            printf("b) %d\n", x-1);
        }
        else if(5*(x*x)+a*x+b>c && a<0)
        {
            while(5*(x*x)+a*x+b>c)
            {
                x++;
            }
            printf("b) %d\n", x);
        }
    }

    //c)
    x=0;
    if(y<c)
    {
        while(5*(x*x)+a*x+b<=c)
        {
            x++;
        }
        printf("c) %d\n", x-1);
    }
    else if(y>c && a<0)
    {
        while(5*(x*x)+a*x+b>=c)
        {
            x++;
        }
        printf("c) %d\n", x);
    }
    else if(y==c)
    {
        x++;
        if(5*(x*x)+a*x+b<c)
        {
            while(5*(x*x)+a*x+b<=c)
            {
                x++;
            }
            printf("c) %d\n", x-1);
        }
        else if(5*(x*x)+a*x+b>c && a<0)
        {
            while(5*(x*x)+a*x+b>=c)
            {
                x++;
            }
            printf("c) %d\n", x);
        }
    }
}
