#include <stdio.h>


int main(){

    int i, f, c;

    printf("-----------------\n");
    printf(" C O N T A D O R\n");
    printf("-----------------\n\n");
    printf("inicio: ");
    scanf("%d", &i);
    printf("fim: ");
    scanf("%d", &f);

    if(i<f){
        c=i;
        while(c<=f){
            printf("%d ..", c);
            c=c+1;
        }
    }
    else{
        c=i;
        while(c>=f){
            printf("%d ..", c);
            c=c-1;
        }
    }


return 0;
}
