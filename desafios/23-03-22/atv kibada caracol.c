#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mat[12][12];
    int num=12;
    int inicio=0;
    int fim=num-1;
    int c=1;

    while(c<=num*num)
    {
        for(int i=inicio; i<=fim; i++) //percorre a linha fixa no sentido X+
        {
            mat[inicio][i]=c++;
        }
        for(int i=inicio+1; i<=fim; i++)//percorre a coluna fixa no sentido Y-
        {
            mat[i][fim]=c++;
        }
        for(int i=fim-1; i>=inicio; i--)//percorre com linha fixa no sentido X-
        {
            mat[fim][i]=c++;
        }
        for(int i=fim-1; i>=inicio+1; i--)//percorre coluna fixa no sentido Y+
        {
            mat[i][inicio]=c++;
        }

        fim=fim-1;
        inicio=inicio+1;
    }

    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            printf("%4.d", mat[i][j]);
        }
        printf("\n");
    }
}
