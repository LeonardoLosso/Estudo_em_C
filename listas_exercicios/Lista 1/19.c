#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double l, h;

    printf("V O L U M E   D A   P I R A M I D E\n\n");
    printf("LADO: ");
    scanf("%lf", &l);
    printf("ALTURA: ");
    scanf("%lf", &h);

    printf("\n\nVOLUME: %.2lf\n\n", (l*l)*(h/3));

    system ("pause");

    return 0;
}
