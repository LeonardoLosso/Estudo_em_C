#include <stdio.h>
#include <string.h>

int main()
{
    int h;
    double val, pag;
    char nome[30];

    printf("Qual o nome do fucionario? ");
    fgets(nome, 30, stdin);
    printf("Valor da hora de trabalho? R$");
    scanf("%lf", &val);
    printf("Horas trabalhadas? ");
    scanf("%d", &h);

    pag=h*val;

    printf("\n----------------------------\n");
    printf("O funcionario, %s, recebe R$%.2lf", nome, pag);

    return 0;
}
