#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;

    while(senha!=2002)
    {
        printf("insira a senha: ");
        scanf("%d", &senha);
        if(senha!=2002)
        {
            printf("\n\nSENHA INCORRETA\nPOR FAVOR TENTE NOVAMENTE\n\n");
        }
        else
        {
            printf("\n\nACESSO PERMITIDO!\n\n ");
        }
        system("pause");
        system("cls");
    }

    return 0;
}
