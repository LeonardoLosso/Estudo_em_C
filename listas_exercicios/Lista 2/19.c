#include <stdio.h>
#include <stdlib.h>

int main()
{

    double x;
    int par;

    printf("LOJA MAMAO COM AcUCAR\n\nQual o valor da compra? R$");
    scanf("%lf", &x);

    printf("Em quantas parcelas quer fazer? (ate 5 sem juros) ");
    scanf("%d", &par);

    if(par<6)
    {
        printf("%d parcelas de: %.2lf\n\n", par, x/par);
    }
    else
    {
        printf("%d parcelas de: R$%.2lf com juros de 5%%\n\n", par, (x*1.05)/par);
    }

    system("pause");

    return 0;
}
