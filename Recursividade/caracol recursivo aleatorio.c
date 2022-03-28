#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int c=1;
int posY;
int posX;
int aux=4, aux2=31;

void gotoxy(int x, int y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int verifica(int valores[10][10], int valor)
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(valores[i][j]==valor)
            {
                return 1;
            }
        }
    }
    return 0;
}

int aleatorio(int matriz[10][10])
{
    int aux;

        aux=rand()%(10*10)+1;

        while(verifica(matriz, aux)==1)
        {
            aux=rand()%(10*10)+1;
        }
        return aux;
}

void caracol(int mat[10][10], int inicio, int fim)
{

    posX=aux;
    posY=inicio+1;
    for(int i=inicio; i<=fim; i++) //percorre a linha fixa no sentido X+
    {
        mat[inicio][i]=aleatorio(mat);
        c++;

        gotoxy (posX,posY);
        printf(" %d",mat[inicio][i]);
        posX=posX+4;

        Sleep(100);
    }
    posX=fim+aux2+inicio;
    for(int i=inicio+1; i<=fim; i++)//percorre a coluna fixa no sentido Y-
    {
        mat[i][fim]=aleatorio(mat);
        c++;

        gotoxy (posX,i+1);
        printf(" %d",mat[i][fim]);

        Sleep(100);
    }
    posX=aux2;

    for(int i=fim-1; i>=inicio; i--)//percorre com linha fixa no sentido X-
    {
        mat[fim][i]=aleatorio(mat);
        c++;

        gotoxy (posX+5,fim+1);
        printf(" %d",mat[fim][i]);

        posX=posX-4;

        Sleep(100);
    }
    posY=fim;
    posX=aux;
    for(int i=fim-1; i>=inicio+1; i--)//percorre coluna fixa no sentido Y+
    {
        mat[i][inicio]=aleatorio(mat);
        c++;

        gotoxy (posX,i+1);
        printf(" %d",mat[i][inicio]);

        Sleep(100);
    }

    aux=aux+4;
    aux2=aux2-4;

    fim=fim-1;
    inicio=inicio+1;
    while (c<100)
    {
        caracol(mat, inicio, fim);
    }
}


int main()
{
    int matriz[10][10];
    int num=10;
    int ini=0;
    int f=num-1;
    srand(time(NULL));

    caracol(matriz, ini, f);

    printf("\n\n\n\n\n\n\n\n\n\n");

}
