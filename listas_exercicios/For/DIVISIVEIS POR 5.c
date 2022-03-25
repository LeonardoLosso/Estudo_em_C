#include <stdio.h>


int main()
{

    int c, v;
    double s, n, d5, sp, m;

    s=0;
    m=0;
    n=0;
    d5=0;
    sp=0;

    for(c=1; c<=5; c++)
    {
        printf("digite o %d.o numero: \n", c);
        scanf("%d", &v);
        if(v%2==0)
        {
            sp=sp+v;
        }
        else if(v<=0)
        {
            n=n+1;
        }
        if(v%5==0)
        {
            d5=d5+1;
        }
        s=v+s;
    }
    m=s/5;
    printf("Divisiveis por 5: %.0lf\n", d5);
    printf("Numeros nulos: %.0lf\n", n);
    printf("Soma dos pares: %.0lf\n", sp);
    printf("Soma geral: %.0lf\n", s);
    printf("Media: %.1lf\n", m);


return 0;
}
