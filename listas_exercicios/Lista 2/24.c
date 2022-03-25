#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf ("Verifique um numero primo: ");
    scanf("%d", &x);

    int j=0;

    for(int i=1; i<=x; i++)
    {
        if (x%i==0)
        {
            j++;
        }
    }
    if(j>2)
    {
        printf("\n\nO numero %d NAO eh primo \n\n", x);
    }
    else
    {
        printf("\n\nO numero %d eh primo \n\n", x);
    }

    system("pause");


    return 0;
}
