#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//EX 2: RETÂNGULO

int main()
{
//--------VAR-----------------
    double b, a, h, p, d;
//--------INICIO--------------
    printf("Qual a base do retangulo? ");
    scanf("%lf", &b);
    printf("Qual a altura do retangulo? ");
    scanf("%lf", &h);
//--------MANIPULAÇÃO DE VALORES-------------
    a=b*h;
    p=(2*b)+(2*h);
    d=sqrt(pow(b, 2)+pow(h, 2));
//-------RESULTADOS-------------
    system("cls");
    printf("Base: %.1lf // Altura: %.1lf \n", b, h);
    printf("\n----------------------------");
    printf("\n");
    printf("\nA area do retangulo eh: %.4lf\n", a);
    printf("O perimetro do retangulo eh: %.4lf\n", p);
    printf("A diagonal do retangulo eh: %.4lf", d);

    return 0;
}
