#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x;

    printf ("Insira um valor: ");
    scanf("%d", &x);

    if (x>=50 && x<=100)
    {
        printf("\n%d esta no intervalo de 50 a 100\n", x);
    }
    else if(x>100)
    {
        printf("%d esta acima do intervalo\n", x);
    }
    else
    {
        printf("%d esta a baixo do intervalo\n", x);
    }

    system ("pause");

    return 0;
}
