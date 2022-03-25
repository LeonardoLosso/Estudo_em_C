#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mat[10][10],tmp[100], c=0, k=0;

    srand(time(NULL));

    do
    {
        c=0;

        tmp[k]=rand()%100+1;

        for(int l=0; l<k; l++)
        {
            if(tmp[k]==tmp[l])
            {
                c=1;
            }
        }
        if(c==0)
        {
            k++;
        }
    }while(k<100);

    k=0;

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            mat[i][j]=tmp[k];

            printf("%3.d ", mat[i][j]);

            k++;
        }
        printf("\n");
    }
}


