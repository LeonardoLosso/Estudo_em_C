#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;

    printf("De um valor a X: ");
    scanf("%lf", &x);

    y=x+(x*0.25);

    printf("\n\n%.1lf + 25%% = %.2lf\n\n", x, y);

    system ("pause");

    return 0;
}
