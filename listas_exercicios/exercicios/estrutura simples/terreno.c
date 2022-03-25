#include <stdio.h>
#include <stdlib.h>

//EX 1: "TERRENO"

int main()
{
//------------VAR------------------------------
    double l, c, mq, a, val;
//------------INICIO---------------------------
    printf("Insira a largura do terreno: ");
    scanf("%lf", &l);
    printf("Insira o comprimento do terreno: ");
    scanf("%lf", &c);
    printf("Insira o valor do metro quadrado: R$");
    scanf("%lf", &mq);
    system("cls");
//------------MANIPULAÇÃO DOS DADOS------------
    a=l*c;
    val=mq*a;

    printf("AREA DO TERRENO: %.1lf m2\n", a);
    printf("\nVALOR DO TERRENO: R$%.2lf\n", val);

    return 0;
}
