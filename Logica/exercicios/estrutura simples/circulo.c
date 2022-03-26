#include <stdio.h>
#include <math.h>

int main()
{
    double r, a;
    printf("Raio: ");
    scanf("%lf", &r);

    a=3.14159*pow(r,2);

    printf("A area do circulo: %.3lf", a);

    return 0;
}
