#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double r;

    printf("V O L U M E   D A   E S F E R A\n\n");
    printf("Qual o raio da esfera? ");
    scanf("%lf", &r);

    printf("\n\nVOLUME: %.2lf\n\n", ((4/3)*3.1416)*(r*r*r));

    system("pause");

    return 0;
}
