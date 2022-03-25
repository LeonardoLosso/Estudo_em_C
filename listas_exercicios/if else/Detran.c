#include <stdio.h>
#include <string.h>

int main(){

    int ano, nasc, idade, falta, ano2;

    printf("em que ano estamos? \n");
    scanf("%d", &ano);
    printf("Em que ano voce nasceu? \n");
    scanf("%d", &nasc);

    idade=ano-nasc;

    if(idade>=18){
        printf("Voce esta apto para dar entrada na CNH ");
    }
    else{
        falta=18-idade;
        printf("Ainda não pode dar entrada na CNH, faltam :%d\n, anos", falta);
        ano2=nasc+18;
        printf("\nVoce podera dar entrada na CNH no ano de: %d\n", ano2);
    }
return 0;
}
