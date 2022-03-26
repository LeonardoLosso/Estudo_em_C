#include <stdio.h>

int main()
{
    double dist, comb, consm;

    printf("Distacia percorrida (km): ");
    scanf("%lf", &dist);
    printf("Combustivel gasto (L): ");
    scanf("%lf", &comb);

    consm=dist/comb;

    printf("\n----------------\n");
    printf("O consumo medio foi de: %.3lf km/l\n\n", consm);

    return 0;
}
