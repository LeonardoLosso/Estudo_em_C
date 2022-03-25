#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, y;

    printf ("Do valor de x: ");
    scanf("%d", &x);

    printf ("Do valor de Y: ");
    scanf("%d", &y);

    if(x==y)
    {
        printf("\n\nVALORES IGUAIS\n\n");
    }
    else if(x>y)
    {
        printf("\n\nX MAIOR QUE Y\n\n");
    }
    else
    {
        printf("\n\nY MAIOR QUE X\n\n");
    }


    system ("pause");

    return 0;
}
