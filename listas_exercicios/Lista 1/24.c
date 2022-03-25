#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double n, s;
    s=0;

    for(int i=1; i<=6; i++)
    {
        printf("insira a %d.a nota: ", i);
        scanf("%lf", &n);
        s=s+n;
    }
        printf("SOMA DAS NOTAS: %.1lf\n\n", s);

        system("pause");

        return 0;
}
