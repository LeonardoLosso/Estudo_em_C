#include <stdio.h>

int main()
{
    double a, b, c, maior;

    printf("Distancia 1: ");
    scanf("%lf", &a);
    printf("Distancia 2: ");
    scanf("%lf", &b);
    printf("Distancia 3: ");
    scanf("%lf", &c);

    if(a>b && a>c)
    {
        maior=a;
    }
    else if(b>c)
    {
        maior=b;
    }
    else
    {
        maior=c;
    }
    printf("Maior distancia %.2lf", maior);
    return 0;
}
