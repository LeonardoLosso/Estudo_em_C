#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int idade, sexo;
    double sal, pct;
    char nome[50];

    printf("FICHA DE REAJUSTE SALARIAL: \n-------------------------------\n");

    printf("Nome do colaborador: ");
    gets(nome);

    printf("Idade de %s: ", nome);
    scanf("%d", &idade);

    printf("Sexo do colaborador:\n    [1] - HOMEM \n    [2] - MULHER\n");
    scanf("%d", &sexo);

    printf("Atual salario: ");
    scanf("%lf", &sal);

    printf("\n\n");
    system ("pause");
    system("cls");

    double nsal;

    if(idade>50)
    {
        nsal=sal+(sal*0.35);
        pct=35.0;
    }
    else if(sexo==2)
    {
        if(idade<=24)
        {
            nsal=sal+(sal*0.18);
            pct=18.0;
        }
        else if(idade>=25 && idade<=50)
        {
            nsal=sal+(sal*0.23);
            pct=23.0;
        }
    }
    else if(sexo==1)
    {
        if(idade<=24)
        {
            nsal=sal+(sal*0.175);
            pct=17.5;
        }
        else if(idade>=25 && idade<=38)
        {
            nsal=sal+(sal*0.21);
            pct=21.0;
        }
        else if(idade>=39 && idade<=50)
        {
            nsal=sal+(sal*0.23);
            pct=23.0;
        }
    }

    printf("\n\n\n");

    printf("NOME DO COLABORADOR: %s\nANTIGO SALARIO: %.2lf\nAUMENTO DE: %.1lf%%\nNOVO SALARIO: %.2lf\n\n", nome, sal, pct, nsal);

    system("pause");

    return 0;
}
