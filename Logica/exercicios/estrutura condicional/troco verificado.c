#include <stdio.h>

int main()
{
    int qtd;
    double val, din, tot, conf;

    printf("Valor do produto: ");
    scanf("%lf", &val);
    printf("Quantidade do produto: ");
    scanf("%d", &qtd);
    printf("Valor dado: ");
    scanf("%lf", &din);

    tot=val*qtd;

    if(din<tot)
    {
        conf=tot-din;
        printf("DINEHIRO INSUFICIENTE. FALTAM: R$%.2lf", conf);
    }
    else
    {
        conf=din-tot;
        printf("TROCO: R$%.2lf", conf);
    }
    return 0;
}
