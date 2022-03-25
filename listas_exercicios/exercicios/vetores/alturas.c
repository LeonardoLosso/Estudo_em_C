#include <stdio.h>
#include <string.h>

int main()
{
    int n, a;
    double tot, m, per;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nome[n][30];
    int idade[n];
    double altura[n];
    tot=0;
    a=0;

    for(int i=0; i<n; i++)
    {
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
        tot=tot+altura[i];

        if(idade[i]<16)
        {
            a=a+1;
        }
    }
        m=tot/n;
        per=((double)a/(double)n)*100;

        printf("ALTURA MEDIA: %.2lf\n", m);
        printf("PESSOAS COM MENOS DE 16: %.1lf %%\n", per);

        for(int i=0; i<n; i++)
        {
            if (idade[i] < 16)
            {
                printf("%s\n", nome[i]);
            }
        }


    return 0;
}
