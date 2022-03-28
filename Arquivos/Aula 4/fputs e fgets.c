#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pont_arq;
    int r;

    pont_arq = fopen("teste_FPUTS.txt", "w");

    if(pont_arq==NULL)
    {
        printf("Erro ao abrir o arquivo!\n");

        return 1;
    }

    r=fputs("Programando em linguagem C, verificando gravacao", pont_arq);

    if(r==EOF)
    {
        printf("Erro ao salvar os dados!!\n");
    }
    else
    {
        printf("Dados salvos com sucesso!!");
    }

    fclose(pont_arq);

    printf("\n----LEITURA DOS DADOS GRAVADOS----\n");

    pont_arq=fopen("teste_FPUTS.txt", "r");

    char texto[51];

    while(fgets(texto, 50, pont_arq) !=NULL)
    {
        printf("%s\n", texto);
    }


    return 0;
}
