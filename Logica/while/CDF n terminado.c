#include <stdio.h>
#include <string.h>

int main(){

    int t, c, j;
    double n, mn;
    char ma[50], a[50], i;

    printf ("quantos alunos tem? ");
    scanf("%d", &t);
    c=1;

    while (c<=t){
        printf("\n------------------------\n");
        printf("Aluno %d \n", c);
        fseek(stdin, 0, SEEK_END);
        fgets(a, 50, stdin);
        printf("qual a media de %s ? \n", a);
        scanf("%lf", &n);

        if(n>mn){
            mn=n;
            for(j=0;j<49;j++){
                i=a[j];
                ma[j]=i;
            }
            }
        c=c+1;
        }
    printf("\n-------------------------\n");
    printf("O melhor aluno foi: %s com a media de %.1lf", ma, mn);

return 0;
}

