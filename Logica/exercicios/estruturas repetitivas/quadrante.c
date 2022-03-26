#include <stdio.h>

int main()
{
    int x, y;

    do
    {
        printf("Insira X: ");
        scanf("%d", &x);
        printf("Insira Y: ");
        scanf("%d", &y);

        if(x>0 && y>0) //Q1
        {
            printf("Quadrante 1\n");
        }
        else if(x<0 && y>0) //Q2
        {
            printf("Quadrante 2\n");
        }
        else if(x<0 && y<0) //Q3
        {
            printf("Quadrante 3\n");
        }
        else if(x>0 && y<0) //Q4
        {
            printf("Quadrante 4\n");
        }
    }while(x!=0 && y!=0);

    return 0;
}
