#include <stdio.h>

int main()
{
    double s, a, ns;

    printf("Salario atual: R$");
    scanf("%lf", &s);

    if(s<=1000)
    {
        ns=s*0.2+s;
        printf("Novo salario: R$%.2lf\n", ns);
        a=ns-s;
        printf("Aumento de: R$%.2lf\n", a);
        printf("Porcentagem: 20%\n");
    }
    else if(s>1000 && s<=3000)
    {
        ns=s*0.15+s;
        printf("Novo salario: R$%.2lf\n", ns);
        a=ns-s;
        printf("Aumento de: R$%.2lf\n", a);
        printf("Porcentagem: 15%\n");
    }
    else if(s>3000 && s<=8000)
    {
        ns=s*0.1+s;
        printf("Novo salario: R$%.2lf\n", ns);
        a=ns-s;
        printf("Aumento de: R$%.2lf\n",a);
        printf("Porcentagem: 10%\n");
    }
    else
    {
        ns=s*0.05+s;
        printf("Novo salario: R$%.2lf\n", ns);
        a=ns-s;
        printf("Aumento de: R$%.2lf\n", a);
        printf("Porcentagem: 5%\n");
    }

    return 0;
}
