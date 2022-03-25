//3) Elaborar um programa em linguagem C que solicite e armazene em um vetor as idades de 7 pessoas. Posteriormente apresente a Média das Idades
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade[7], soma=0;
    double media;

    for(int i=0; i<7; i++)
    {
        printf("insira a %d idade: ", i+1);
        scanf("%d", &idade[i]);

        soma+=idade[i];
    }

    media=soma/7.0;

    printf("\n\nMEDIA DAS IDADES: %.2lf", media);

    return 0;
}
