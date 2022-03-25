#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double a, b, c, r;

    printf("De o valor de A: ");
    scanf("%lf", &a);

    printf("De o valor de B: ");
    scanf("%lf", &b);

    printf("De o valor de C: ");
    scanf("%lf", &c);

    r=a+b-c;
    printf("\n\n R = %.0lf + &.0lf - %.0lf  // R=%.2lf\n", a, b, c, r);

    r=(b+a*2)/c;
    printf("R = (%.0lf + %.0lf x 2)/ %.0lf  // R=%.2lf\n\n", b, a, c, r);

    system ("pause");

    return 0;
}
