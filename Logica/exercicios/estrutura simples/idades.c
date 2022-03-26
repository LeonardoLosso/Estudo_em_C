#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    double id1, id2, m;
    char nome1[30], nome2[30];
//----------------INICIO-----------------
    printf("Nome da 1.a pessoa: ");
    gets(nome1);
    printf("Idade da 1.a pessoa: ");
    scanf("%lf", &id1);
//------------------PESSOA 2----------
    fseek(stdin, 0, SEEK_END);

    printf("Nome da 2.a pessoa: ");
    fgets(nome2, 30, stdin);
    printf("Idade da 2.a pessoa: ");
    scanf("%lf", &id2);
//------------------SAIDA DE DADOS------------
    system("cls");
    m=(id1+id2)/2;

    printf("%s, tem %.0lf anos\n", nome1, id1);
    printf("%s, tem %.0lf anos\n", nome2, id2);
    printf("-----------------------------------------------\n");
    printf("A media das idades eh: %.2lf", m);

    return 0;
}
