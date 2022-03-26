#include <stdio.h>

int main()
{
    double p, pag, t;
    int qtd;

    printf("Qual o valor unitario do produto? ");
    scanf("%lf", &p);
    printf("Qual a quantidade? ");
    scanf("%d", &qtd);
    printf("Valor pago: R$");
    scanf("%lf", &pag);

    t=pag-(p*qtd);

    printf("TROCO: R$%.2lf", t);

    return 0;
}
