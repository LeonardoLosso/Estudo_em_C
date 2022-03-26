#include <stdio.h>

int main()
{
    double hora, minuto, segundo, s;

    printf("Diga o tempo em sec: ");
    scanf("%lf", &s);

    hora=s/3600;
    minuto=(((s/3600)-(int)hora)*3600)/60;
    segundo=(minuto-(int)minuto)*60;

    printf("\n\n%.0lf : %.0lf : %.0lf \n\n", hora, minuto, segundo);
    return 0;
}
