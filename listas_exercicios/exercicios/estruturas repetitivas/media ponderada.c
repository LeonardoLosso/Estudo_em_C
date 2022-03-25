#include <stdio.h>

int main()
{
    int n;
    double a, b, c, tot, m;

    printf("Quantos casos vai fazer? ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        printf("Digite 3 numeros: \n");
        scanf("%lf %lf %lf", &a, &b, &c);
        tot=a*2;
        tot=(b*3)+tot;
        tot=(c*5)+tot;
        m=tot/10;

        printf("MEDIA PONDERADA: %.1lf\n\n", m);

    }

    return 0;
}
