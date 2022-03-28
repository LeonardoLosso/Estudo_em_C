#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int ordem;//global
int c=0;

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

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

void caracol(int mat[ordem][ordem], int inicio, int fim)
{
    for(int i=inicio; i<=fim; i++) //percorre a linha fixa no sentido X+
    {
        mat[inicio][i]=aleatorio(mat);
        c++;
    }

    for(int i=inicio+1; i<=fim; i++)//percorre a coluna fixa no sentido Y-
    {
        mat[i][fim]=aleatorio(mat);
        c++;
    }

    for(int i=fim-1; i>=inicio; i--)//percorre com linha fixa no sentido X-
    {
        mat[fim][i]=aleatorio(mat);
        c++;
    }

    for(int i=fim-1; i>=inicio+1; i--)//percorre coluna fixa no sentido Y+
    {
        mat[i][inicio]=aleatorio(mat);
        c++;
    }

    fim=fim-1;
    inicio=inicio+1;
    while (c<(ordem*ordem))
    {
        caracol(mat, inicio, fim);
    }
}

int main()
{
    printf("Qual a ordem da matriz: ");
    scanf("%d", &ordem);
    printf("\n\n");

    int matriz[ordem][ordem];
    int ini=0;
    int f=ordem-1;

    srand(time(NULL));

    caracol(matriz, ini, f);

    for(int i=0;i<ordem; i++)
    {
        for(int j=0;j<ordem; j++)
        {
            printf("%4.d", matriz[i][j]);
        }
        printf("\n");
    }

   return 0;
}
