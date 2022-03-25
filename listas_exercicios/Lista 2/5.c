#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char mes[12][20]={"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    int x;

    printf("Insira o Mes em numero: ");
    scanf("%d", &x);

    while(x<1 || x>12)
    {
        printf("\nVALOR INVALIDO, TENTE NOVAMENTE\n");

        printf("Insira o Mes em numero: ");
        scanf("%d", &x);
    }

    printf("\nMes %d = %s\n\n", x, mes[x-1]);

    system("pause");



    return 0;
}
