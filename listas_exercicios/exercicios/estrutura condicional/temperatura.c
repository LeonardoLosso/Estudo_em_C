#include <stdio.h>

int main()
{
    double c, f;
    int r;

    printf("[1] - celsius para fahrenheit \n[2] - fahrenheit para celsius \n");
    scanf("%d", &r);

    if(r==1)
    {
        printf("qual o valor em celsius? ");
        scanf("%lf", &c);
        f=(c*1.8)+32;
        printf("\nCELSIUS: %.1lf\nFAHRENHEIT: %.1lf", c, f);
    }
    else if(r==2)
    {
        printf("qual o valor em fahrenheit? ");
        scanf("%lf", &f);
        c=(f-32)/1.8;
        printf("\nFAHRENHEIT: %.1lf\nCELSIUS: %.1lf", f, c);
    }
    else
    {
        printf("Opcçao invalida\nS A I N D O. . .\n");
    }
    return 0;
}
