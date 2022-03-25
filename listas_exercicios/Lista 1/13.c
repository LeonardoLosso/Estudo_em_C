#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("de o 1.o valor inteiro: ");
    scanf("%d", &x);

    printf("de o 2.o valor inteiro: ");
    scanf("%d", &y);

    printf("\n\n%d + %d = %d\n\n", x, y, x+y);

    system ("pause");

    return 0;
}
