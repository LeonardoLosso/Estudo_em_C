#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double n[3], s;

    for(int i=0; i<=2; i++)
    {
        printf("insira o %d.o valor: ", i+1);
        scanf("%lf", &n[i]);

    }
        s=(n[0]+n[2])*n[1];
        printf("%.1lf + %.1lf * %.1lf = %.1lf\n\n",n[0],n[2],n[1],s );

        system("pause");

        return 0;
}
