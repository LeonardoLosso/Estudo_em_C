#include <stdio.h>

int main()
{
    int cod, a, g, d;
    a=0;
    g=0;
    d=0;

    while(cod!=4)
    {
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &cod);

        if(cod==1)
        {
            a=a+1;
        }
        else if(cod==2)
        {
            g=g+1;
        }
        else if(cod==3)
        {
            d=d+1;
        }
    }
    printf("\nMUITO OBRIGADO!\n\n");
    printf("ALCCOL: %d\nGASOLINA: %d\nDIESEL: %d\n", a, g, d);


    return 0;
}
