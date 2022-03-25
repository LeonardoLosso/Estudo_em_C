#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, y;

    printf("digite o 1.o valor inteiro: ");
    scanf("%d", &x);

    printf("digite o 2.o valor inteiro: ");
    scanf("%d", &y);

    printf("\nSOMA: %d \n45%% da soma: %.2lf", x+y, (x+y)*0.45);

    printf("\n\n%d - %d = %d\n%d - %d = %d\n\n", x, y, x-y, y, x, y-x);

    system ("pause");
    return 0;
}
