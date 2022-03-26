#include <stdio.h>

int main()
{
    int min;
    double val;

    printf("Quantos min foram usados? ");
    scanf("%d", &min);

    if (min>100)
    {
        val=((min-100)*2)+50;
    }
    else
    {
        val=50;
    }
    printf("\nValor a pagar: R&%.2lf\n", val);

    return 0;
}
