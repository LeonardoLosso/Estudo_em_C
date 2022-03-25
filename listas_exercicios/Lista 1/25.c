#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double n, s;
    s=1;

    for(int i=1; i<=3; i++)
    {
        printf("insira o %d.o numero : ", i);
        scanf("%lf", &n);
        s=s*n;
    }
        printf("\n\nO PRODUTO: %.1lf\n\n", s);

        system("pause");

        return 0;
}
