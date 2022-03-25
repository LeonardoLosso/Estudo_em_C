#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordem;//global

int verifica(int valores[ordem][ordem], int valor)
{
    for(int i=0; i<ordem; i++)
    {
        for(int j=0; j<ordem; j++)
        {
            if(valores[i][j]==valor)
            {
                return 1;
            }
        }
    }
    return 0;
}

int aleatorio(int matriz[ordem][ordem])
{
    int aux;

        aux=rand()%(ordem*ordem)+1;

        while(verifica(matriz, aux)==1)
        {
            aux=rand()%(ordem*ordem)+1;
        }
        return aux;
}

void caracol(int matriz[ordem][ordem])
{
    int inicio=0;
    int fim=ordem-1;  //o fim tem que ser ordem -1 pra não estourar a matriz q vai de 0 a 4
    int c;    //contador para o while

    c=0;

    for(int i=0;i<ordem; i++)
    {
        for(int j=0;j<ordem; j++)
        {
            matriz[i][j]=0;
        }
    }
    while(c<ordem*ordem)
    {
        for(int i=inicio; i<=fim; i++) //percorre no sentido X+
        {
            matriz[inicio][i]=aleatorio(matriz);
            c++;
        }

        for(int i=inicio+1; i<=fim; i++) //percorre no sentido Y-
        {
            matriz[i][fim]=aleatorio(matriz);
            c++;
        }

        for(int i=fim-1; i>=inicio; i--) //percorre no sentido X-
        {
            matriz[fim][i]=aleatorio(matriz);
            c++;
        }

        for(int i=fim-1; i>=inicio+1; i--)  //percorre no sentido Y+
        {
            matriz[i][inicio]=aleatorio(matriz);
            c++;
        }

        fim=fim-1;
        inicio=inicio+1;
    }
}

int main()
{
    printf("Qual a ordem da matriz: ");
    scanf("%d", &ordem);
    printf("\n\n");

    int mat[ordem][ordem];

    srand(time(NULL));

    caracol(mat);

    for(int i=0;i<ordem; i++)
    {
        for(int j=0;j<ordem; j++)
        {
            printf("%4.d", mat[i][j]);
        }
        printf("\n");
    }

   return 0;
}
