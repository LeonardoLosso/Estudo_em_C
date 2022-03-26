#include <stdio.h>

int main ()
{
    double n1, n2, m;

    do //NOTA 1
    {
        printf("Insira a 1.a nota: ");
        scanf("%lf", &n1);
        if(n1>10 ||n1 <0)
        {
            printf("\nNOTA INVALIDA\n\nTENTE NOVAMENTE\n");
        }
    }while(n1>10 || n1<0);

    do //NOTA 2
    {
        printf("Insira a 2.a nota: ");
        scanf("%lf", &n2);
        if(n2>10 ||n2 <0)
        {
            printf("\nNOTA INVALIDA\n\nTENTE NOVAMENTE\n");
        }
    }while(n2>10 || n2<0);

    m=(n1+n2)/2;
    printf("\n\nMEDIA: %.1lf\n\n", m);

    return 0;
}
