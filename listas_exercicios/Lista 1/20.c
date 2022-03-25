#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double l1, l2, l3;

    printf("V O L U M E   D O   P R I S M A\n\n");
    printf("Insira o 1.o lado: ");
    scanf("%lf", &l1);

    printf("Insira o 2.o lado: ");
    scanf("%lf", &l2);

    printf("Insira o 3.o lado: ");
    scanf("%lf", &l3);

    printf("\n\nVOLUME: %.1lf\n\n", l1*l2*l3);

    system ("pause");

    return 0;
}
