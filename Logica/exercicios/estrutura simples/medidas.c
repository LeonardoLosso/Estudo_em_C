#include <stdio.h>
#include<math.h>

int main()
{
    double a, b, c, q, tri, tra;

    printf("Medida 1: ");
    scanf("%lf", &a);
    printf("Medida 2: ");
    scanf("%lf", &b);
    printf("Medida 3: ");
    scanf("%lf", &c);

    q=pow(a,2);
    tri=(b*a)/2;
    tra=((a+b)*c)/2;

    printf("\n-----------------------\n");
    printf("Area do quadrado: %.4lf\n", q);
    printf("Area do triangulo: %.4lf\n", tri);
    printf("Area do trapezio: %.4lf\n", tra);

    return 0;
}
