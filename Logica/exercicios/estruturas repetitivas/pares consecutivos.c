#include <stdio.h>

int main()
{
    int x, s;

    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
        if(x%2==0 && x!=0)
        {
            s=x+(x+2)+(x+4)+(x+6)+(x+8);
        }
        else if(x%2!=0)
        {
            s=(x+1)+(x+3)+(x+5)+(x+7)+(x+9);
        }
        if(x>0)
        {
            printf("\nSOMA: %d\n", s);
        }

    }while(x!=0);
    printf("S A I N D O. . . ");

    return 0;
}
