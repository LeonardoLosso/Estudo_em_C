#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double r, h;

    printf("V O L U M E   D O   C I L I N D R O \n\n");
    printf("\n\nRAIO: ");
    scanf("%lf", &r);

    printf("ALTURA: ");
    scanf("%lf", &h);

    printf("\nVOLUME: %.2lf\n\n", (3.1416*(r*r))*(h));

    system ("pause");

    return 0;
}
