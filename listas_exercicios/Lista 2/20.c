#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, y, s=0;

    printf("MULTIPLICACAO X . Y: \n\n");

    printf("De o valor de X: ");
    scanf("%d", &x);

    printf("De o valor de Y: ");
    scanf("%d", &y);

    for(int i=0; i!=x; i++)
    {
        s=s+y;
    }

    printf("\nPRODUTO : %d\n\n", s);

    system ("pause");

    return 0;
}
