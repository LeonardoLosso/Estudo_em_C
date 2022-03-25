#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, y, i=0, s=0;

    printf("MULTIPLICACAO X . Y: \n\n");

    printf("De o valor de X: ");
    scanf("%d", &x);

    printf("De o valor de Y: ");
    scanf("%d", &y);

    while (i!=x)
    {
        s=s+y;
        i++;
    }

    printf("\nPRODUTO : %d\n\n", s);

    system ("pause");

    return 0;
}
