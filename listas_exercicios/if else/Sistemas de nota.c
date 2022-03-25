#include <stdio.h>
#include <string.h>


int main (){
    double n1, n2, m;
    char nota;

    printf("Nota 1: \n");
    scanf("%lf", &n1);
    printf ("Nota 2: \n");
    scanf("%lf", &n2);
    m=(n1+n2)/2;

    if(m==10){
        nota='S';
    }
    else if(m<10 && m>=9){
        nota='A';
    }
    else if(m<9 && m>=8){
        nota='B';
    }
    else if(m<8 && m>=7){
        nota='C';
    }
    else if(m<7 && m>=6){
        nota='D';
    }
    else if(m<6 && m>=5){
        nota='E';
    }
    else{
        nota='F';
    }

    printf("sua media eh : %.1lf \n", m);
    printf("sua nota eh : %c ", nota);

return 0;
}
