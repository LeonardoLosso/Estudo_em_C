#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("NUMEROS PARES ENTRE 11 E 30: \n\n");

    for(int i=11; i<=29; i++)
    {
        if (i%2==0)
        {
            printf (" %d ", i);
        }
    }

    printf("\n\n");

    system ("pause");

    return 0;
}
