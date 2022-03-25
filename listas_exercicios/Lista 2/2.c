#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
     double n, s=0, m;

     for(int i=1; i<=3; i++)
     {
         printf("Digite a %d.a nota: ", i);
         scanf("%lf", &n);
         s=s+n;
     }

     m=s/3;

     printf("\n\nMEDIA: %.1lf \n", m);

     if(m>=6.0)
     {
         printf("ALUNO APROVADO!\n\n");
     }
     else
     {
         printf("ALUNO REPROVADO!\n\n");
     }

     system ("pause");

     return 0;
 }
