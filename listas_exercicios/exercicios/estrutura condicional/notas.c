#include <stdio.h>

int main()
{
    double n1, n2, nf;

    printf("Primeira nota: ");
    scanf("%lf", &n1);
    printf("Segunda nota: ");
    scanf("%lf", &n2);

    nf=n1+n2;

    printf("Nota final: %.1lf", nf);
    if(nf<60.0)
    {
        printf("\nREPROVADO");
    }
    else
    {
        printf("\nAPROVADO");
    }
    return 0;
}
