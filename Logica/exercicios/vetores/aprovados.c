#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("quantos alunos serao inseridos ? ");
    scanf("%d", &n);

    char nome[n][20];
    double n1, n2, s[n], m;

    for(int i=0; i<n; i++)
    {
        printf("NOME ALUNO %d: ", i+1);
        fflush(stdin);
        gets(nome[i]);

        printf("NOTA 1: ");
        scanf("%lf", &n1);

        printf("NOTA 2: ");
        scanf("%lf", &n2);

        s[i]=n1+n2;
    }

    printf("\n\n------------------------\n");
    printf("ALUNOS APROVADOS: \n\n");

    for(int i=0; i<n; i++)
    {
        m=s[i]/2;

        if(m>=6.0)
        {
            printf("ALUNO: %s\n",nome[i]);
        }
    }



    return 0;
}
