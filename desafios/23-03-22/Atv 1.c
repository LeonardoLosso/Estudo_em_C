#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mat[10][10];

    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            mat[i][j]=rand()%100;

            printf("%3.d", mat[i][j]);
        }
        printf("\n") ;
    }




    return 0;
}
