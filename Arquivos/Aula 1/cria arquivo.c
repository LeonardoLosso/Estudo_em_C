#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pont_arq; //variavel ponteiro para arq

    pont_arq = fopen("arquivo.txt", "a"); //abre/cria o arquivo

    fclose(pont_arq); //fecha o arquivo

    printf("Arquivo criado com sucesso!!\n\n");

    return 0;
}
