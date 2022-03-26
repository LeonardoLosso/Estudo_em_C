#include <stdio.h>

int main()
{
    int x, d, f, n;
    f=0;
    d=0;

    printf("Quantos numeros vai digitar? ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);
        if(x<=20 && x>=10)
        {
            d=d+1;
        }
        else
        {
            f=f+1;
        }
    }
    printf("\nDENTRO: %d \nFORA: %d \n", d, f);

    return 0;
}
