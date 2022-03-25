//5) Construir um programa em linguagem C que Leia um vetor de 8 elementos (V1) e preencha um outro (V2) em ordem inversa
#include <stdio.h>

int main()
{
    int v1[8], v2[8];

    for(int i=0; i<8; i++)
    {
        printf("insira o %d valor: ", i+1);
        scanf("%d", &v1[i]);

        v2[7-i]=v1[i];
    }

    printf("V1     V2\n");

    for(int i=0; i<8; i++)
    {
        printf("%d      %d\n", v1[i], v2[i]);
    }







    return 0;
}
