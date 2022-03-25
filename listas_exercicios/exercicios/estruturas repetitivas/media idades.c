#include <stdio.h>

int main()
{
    int x, m, c;
    double id;
    c=0;
    m=0;

    printf("IDADES: \n");
    while(x>=0)
    {
        scanf("%d", &x);
        if(x>=0)
        {
            c=c+1;
            m=m+x;
        }
    }
    if(m==0)
    {
        printf("\nIMPOSSIVEL CALCULAR");
    }
    else
    {
        id=(double)m/c;
        printf("MEDIA DE IDADES: %.1lf", id);
    }

    return 0;
}
