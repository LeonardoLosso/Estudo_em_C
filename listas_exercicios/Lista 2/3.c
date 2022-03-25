#include <stdio.h>
#include <stdlib.h>

int main ()
 {
     double n1, n2, nsub, m;
     int r;

      printf("Digite a 1.a nota: ");
      scanf("%lf", &n1);

      printf("Digite a 2.a nota: ");
      scanf("%lf", &n2);

      printf("\nDESEJA FAZER SUB?\n[1] - SIM    [2] - NAO\n");
      scanf("%d", &r);
      switch(r)
      {
          case 1:
            printf("\nDigite a nota da sub: ");
            scanf("%lf", &nsub);

            if(nsub>n1 || nsub>n2)
            {
                if(n1>n2)
                {
                    n2=nsub;
                }
                else
                {
                    n1=nsub;
                }
            }
          break;

          default:
            printf("\n\nCALCULANDO MEDIA. . .");
      }

      m=(n1+n2)/2;

      printf("\n\nMEDIA: %.1lf", m);
      if(m>=6)
      {
          printf("\nALUNO APROVADO!\n\n");
      }
      else
      {
          printf("\nALUNO REPROVADO!\n\n");
      }

     system ("pause");

     return 0;
 }
