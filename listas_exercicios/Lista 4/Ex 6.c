/*--------6) Faça um programa em linguagem C que Leia um vetor (V1) de 10 elementos numéricos e preencha um outro (V2)
contendo em cada célula o dobro de V1, e em seguida um terceiro vetor (V3) contendo em cada célula a metade de V1----*/
#include <stdio.h>

int main()
{
    int v1[10], v2[10], aux;
    double v3[10];

    for(int i=0; i<10; i++)
    {
        printf("insira o %d elemento: ", i+1);
        scanf("%d", &v1[i]);

        aux=v1[i];

        v2[i]=aux*2;

        v3[i]=aux/2.0;
    }

    printf("V3           V1         V2\n");

    for(int i=0; i<10; i++)
    {
        printf("%3.1lf         %3.d        %3.d\n", v3[i], v1[i], v2[i]);
    }


    return 0;
}
