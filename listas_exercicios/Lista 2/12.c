#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n[10], s=0;
    int i=0;

    while(i<10)
    {
       printf("Insira o %d.o valor: ", i+1);
       scanf("%lf", &n[i]);
       s=s+n[i];
       i++;
    }

    printf("\nMEDIA: %.1lf\n\n", s/10.0);

    system("pause");


    return 0;
}
