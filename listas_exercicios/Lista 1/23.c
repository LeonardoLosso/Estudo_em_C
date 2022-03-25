#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double n, s;
    s=0;

    printf("insira a 1.a nota: ");
    scanf("%lf", &n);
    s=s+n;

    printf("insira a 2.a nota: ");
    scanf("%lf", &n);
    s=s+n;

    printf("insira a 3.a nota: ");
    scanf("%lf", &n);
    s=s+n;

    printf("\n\nA media eh: %.1lf\n\n", s/3.0);

    system("pause");

    return 0;
}
