#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, y=0;

    printf("Insira um valor: ");
    scanf("%d", &x);
    while(y<x)
    {
        system ("cls");
        printf("Insira um valor maior que %d: ", x);
        scanf("%d", &y);
    }
    system ("cls");

    printf("Numeros entre %d e %d\n\n", x, y);
    int i=x+1;
    do
    {
        printf("%d\n", i);
        i++;
    }while(i<y);

    system("pause");

    return 0;
}
