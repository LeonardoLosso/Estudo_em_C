/*-----7) Solicite ao usuário 5 números inteiros, guarde-os em um vetor e em seguida apresente-os ao usuário.
Finalmente, apresente também quantos elementos são negativos.-------*/
#include <stdio.h>

int main()
{
    int vet[5], NEG=0, POS=0;

    for(int i=0; i<5; i++)
    {
        printf("insira o %d elemento: ", i+1);
        scanf("%d", &vet[i]);

        if(vet[i]<0)
        {
            NEG++;
        }
        else
        {
            POS++;
        }
    }

    printf("\n\nNUMERO DE POSITIVOS: %d\n", POS);
    printf("\n\nNUMERO DE NEGATIVOS: %d\n", NEG);

    return 0;
}
