#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double b, h;

    printf("A R E A  D O  T R I A N G U L O\n\nBASE: ");
    scanf("%lf", &b);

    printf("ALTURA: ");
    scanf("%lf", &h);

    printf("\nAREA: %.2lf\n\n", (b*h)/2);

    system ("pause");

    return 0;
}
