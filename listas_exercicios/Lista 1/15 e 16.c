#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double r;

    printf("A R E A   D O   C I R C U L O\n\nRAIO: ");
    scanf("%lf", &r);

    printf("\n\nAREA: %.2lf", 3.1416*(r*r));

    printf("\nPERIMETRO: %.2lf\n\n", 3.1416*(r+r));

    system ("pause");

    return 0;
}
