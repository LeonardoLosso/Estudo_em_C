#include <stdio.h>
#include <string.h>

int main()
{
    int n, velho;
    velho=0;

    printf("Quantos cadastros? ");
    scanf("%d", &n);

    int idades[n];
    char nomes[n][30];

    for(int i=0; i<n; i++)
    {
        printf("NOME: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("IDADE: ");
        scanf("%d", &idades[i]);
        printf("----------------\n");

        if(velho<idades[i])
        {
            velho=idades[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(idades[i]==velho)
        {
            printf("MAIS VELHO: %s \n", nomes[i]);
            printf("IDADE: %d\n", idades[i]);
        }
    }

    return 0;
}
