#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;

    printf("Coeficiente A: ");
    scanf("%lf", &a);
    printf("Coeficiente B: ");
    scanf("%lf", &b);
    printf("Coeficiente C: ");
    scanf("%lf", &c);
    printf("\n--------------------\n");

    delta=pow(b, 2)-4*a*c;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);

    if(delta<0 || a==0)
    {
        printf("Nao existem raizes reais");
    }
    else
    {
        printf("X1: %.4lf       X2: %.4lf", x1, x2);
    }

    return 0;
}
