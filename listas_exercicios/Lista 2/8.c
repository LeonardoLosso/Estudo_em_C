#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, c, d, e, maior, menor;
    double media;

    printf("Insira o 1.o valor: ");
    scanf("%d", &a);

    printf("Insira o 2.o valor: ");
    scanf("%d", &b);

    printf("Insira o 3.o valor: ");
    scanf("%d", &c);

    printf("Insira o 4.o valor: ");
    scanf("%d", &d);

    printf("Insira o 5.o valor: ");
    scanf("%d", &e);
//---------MAIOR
    if(a>b && a>c && a>d && a>e)
    {
        maior=a;
    }
    else if(b>c && b>d && b>e)
    {
        maior=b;
    }
    else if(c>d && c>e)
    {
        maior=c;
    }
    else if(d>e)
    {
        maior=d;
    }
    else
    {
        maior=e;
    }
//-------MENOR
if(a<b && a<c && a<d && a<e)
    {
        menor=a;
    }
    else if(b<c && b<d && b<e)
    {
        menor=b;
    }
    else if(c<d && c<e)
    {
        menor=c;
    }
    else if(d<e)
    {
        menor=d;
    }
    else
    {
        menor=e;
    }
//-------MEDIA
    media=(a+b+c+d+e)/5.0;

    system ("cls");

    printf("VALORES: %d, %d, %d, %d, %d\n\n", a, b, c, d, e);
    printf("MAIOR: %d\n", maior);
    printf("MENOR: %d\n", menor);
    printf("MEDIA: %.1lf\n\n", media);

    system("pause");

    return 0;
}
