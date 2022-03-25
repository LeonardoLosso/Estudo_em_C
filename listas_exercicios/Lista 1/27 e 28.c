#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("De o 1.o valor: ");
    scanf("%d", &x);

    printf("De o 2.o valor: ");
    scanf("%d", &y);

    printf("\n\n10%% de (%d - %d) = %.2lf\n\n", x, y, (x-y)*0.10);

    system ("pause");

    return 0;
}
