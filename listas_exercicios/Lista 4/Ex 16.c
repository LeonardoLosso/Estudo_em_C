/*16) Leia um vetor com 10 elementos. A seguir, troque o primeiro elemento com o último, o segundo com o penúltimo e assim sucessivamente*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v1[10], aux;

    srand(time(NULL));

    for(int i=0; i<10; i++)
    {
        v1[i]=rand()%10;

        printf("%d ", v1[i]);
    }

    printf("\n\n");

    for(int i=0; i<5; i++)
    {
        aux=v1[i];

        v1[i]=v1[9-i];

        v1[9-i]=aux;
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ", v1[i]);
    }

    printf("\n\n");

    return 0;
}
