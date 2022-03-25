#include <stdio.h>
#include <string.h>

int main (){

    double m1, m2, tot;

    printf("declare a media 1: \n");
    scanf("%lf", &m1);

    printf("declare a media 2: \n");
    scanf("%lf", &m2);

    tot=(m1+m2)/2;
    printf("\nSua media final foi: %.1lf \n", tot);

    if(tot>=6){
        printf("Aprovado! \n");
    }
    else{
            printf("Reprovado! \n");
        }

return 0;
}
