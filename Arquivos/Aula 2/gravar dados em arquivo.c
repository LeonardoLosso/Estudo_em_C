#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *pont_arq;//cria ponteiro para o arquivo
    char palavra[20];

    pont_arq = fopen("arquivo_palavra.txt", "w"); //tipo W apenas gravação (sobrescreve)

    if(pont_arq==NULL)  //testando se foi criado, se n tiver sido retorna NULL
    {
        printf("Erro na abertura do arquivo!\n");

        return 1;
    }
    else
    {
        printf("Escreva uma palavra para testar a gravacao do arquivo: ");
        scanf("%s", palavra);

        fprintf(pont_arq, "%s", palavra); //fprintf para armazenar dados no arquivo

        fclose(pont_arq);

        printf("Dados gravados com sucesso!!\n");
    }



    return 0;
}
