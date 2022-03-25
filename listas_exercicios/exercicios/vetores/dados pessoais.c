#include <stdio.h>
#include <string.h>

int main()
{
    int n, nhomens=0, nmulheres=0;

    printf("Quantas pessoas serao digitadas: ");
    scanf("%d", &n);

    double altura[n], maior=0, menor=10, soma=0;
    char sexo[n];

    for(int i=0; i<n; i++)
    {
        printf("%d.a altura: ", i+1);
        scanf("%lf", &altura[i]);

        if(altura[i]>maior)
        {
            maior=altura[i];
        }
        else if(altura[i]<menor)
        {
            menor=altura[i];
        }

        printf("Sexo [F/M]: ");
        fflush(stdin);
        scanf("%c", &sexo[i]);

        if(sexo[i]=='f')
        {
            soma=soma+altura[i];
            nmulheres++;
        }
        else
        {
            nhomens++;
        }

        printf("--------------------\n");
    }

    printf("\n\nRELATORIO:\n\n");

    printf("MAIOR ALTURA: %.2lf\nMENOR ALTURA: %.2lf\n",maior, menor);

    printf("NUMERO DE HOMENS: %d\nMEDIA DAS MULHERES: %.2lf\n\n", nhomens, soma/(nmulheres));

    return 0;
}
