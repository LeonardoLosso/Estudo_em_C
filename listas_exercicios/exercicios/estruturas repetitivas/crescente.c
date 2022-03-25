#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    do
    {
        printf("De o valor de X: ");
        scanf("%d", &x);
        printf("De o valor de Y: ");
        scanf("%d", &y);
        if(x<y)
        {
            printf("\n\nCRESCENTE\n\n");
        }
        else if(x>y)
        {
            printf("\n\nDECRESCENTE\n\n");
        }
        else
        {
            printf("\n\nS A I N D O . . .\n\n");
        }
        system("pause");
        system("cls");
    }while(x!=y);
    return 0;
}
