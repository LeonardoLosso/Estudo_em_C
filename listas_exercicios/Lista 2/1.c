#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x;

    printf ("DIGITE UM NUMERO: ");
    scanf("%d", &x);

    if (x%2==0)
    {
        printf("\n\nO NUMERO EH PAR \n\n");
    }
    else
    {
        printf("\n\nO NUMERO EH IMPAR \n\n");
    }

    system("pause");

    return 0;
}
