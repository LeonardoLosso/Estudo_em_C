#include <stdio.h>

int main()
{
    int cod, qtd;
    double tot;

    printf("Cod. do produto: ");
    scanf("%d", &cod);

    printf("Quantidade: ");
    scanf("%d", &qtd);

    if(cod==1)
    {
        tot=5*qtd;
    }
    else if (cod==2)
    {
        tot=3.5*qtd;
    }
    else if (cod==3)
    {
        tot=4.8*qtd;
    }
    else if (cod==4)
    {
        tot=8.9*qtd;
    }
    else if(cod==5)
    {
        tot=7.32*qtd;
    }

    printf("TOTAL A PAGAR: R$%.2lf", tot);
    return 0;
}
