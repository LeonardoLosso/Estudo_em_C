#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double r, h;

    printf("V O L U M E   D O   C O N E\n\n");

    printf("\n\nRAIO: ");
    scanf("%lf", &r);

    printf("ALTURA: ");
    scanf("%lf", &h);

    printf("\n\nVOLUME: %.2lf\n\n", (3.1416*(r*r)/3)*h);

    system("pause");

    return 0;
}
