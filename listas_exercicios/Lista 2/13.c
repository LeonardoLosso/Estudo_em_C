#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x=0, y=0;

    do
    {
        system("cls");

        printf("Digite um valor entre 10 e 50: ");
        scanf("%d", &x);
    }while(x>50 || x<10);

    do
    {
        system ("cls");

        printf("Digite um valor pelo menos 15 unidades maior que %d: ", x);
        scanf("%d", &y);

        system("cls");
    }while(y<x+15);

    printf("SOMA: %d + %d = %d\n\n", x, y, x+y);

    system ("pause");


    return 0;
}
