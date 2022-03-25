#include <stdio.h>

int main()
{
    double x, y;

    printf("Valor de X: ");
    scanf("%lf", &x);
    printf("Valor de Y: ");
    scanf("%lf", &y);

    if(x==0 && y!=0)//eixo x
    {
        printf("EIXO X");
    }
    else if(y==0 && x!=0)//eixo y
    {
        printf("EIXO Y");
    }
    else if(y==0 && x==0)//origem
    {
        printf("ORIGEM");
    }
    else if(x>0 && y>0)//Q1
    {
        printf("Q1");
    }
    else if(x<0 && y>0)//Q2
    {
        printf("Q2");
    }
    else if(x<0 && y<0)//Q3
    {
        printf("Q3");
    }
    else
    {
        printf("Q4");
    }

    return 0;
}
