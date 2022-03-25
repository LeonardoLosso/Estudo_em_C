#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b)
    {
        if(a%b==0)
        {
            printf("sao multiplos");
        }
        else
        {
            printf("nao sao multiplos");
        }
    }
    else
    {
        if(b%a==0)
        {
            printf("sao multiplos");
        }
        else
        {
            printf("nao sao multiplos");
        }
    }


    return 0;
}
