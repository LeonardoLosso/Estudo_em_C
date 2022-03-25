/*------23)Solicite uma frase e informe ao usuário se a palavra “AMOR” está ou não na frase-------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 int main ()
 {
     char frase[100], aux[4];
     int amr=0;

     printf("Digite uma frase: ");
     gets(frase);

//----------TRANSFORMA EM MINUSCULO-----------

     for(int i=0; i<strlen(frase); i++)
     {
         frase[i]=tolower(frase[i]);
     }

//----------PROCURA POR AMOR-----------

     for(int i=0; i<strlen(frase); i++)
     {
         if((frase[i]==32 && frase[i+1]=='a'))
         {
             for(int j=0; frase[i+j]!=32; j++)
             {
                 aux[j]=frase[i+j];
             }
             if(aux == "amor")
             {
                 amr++;
             }
         }
     }

     printf("\n\nA palavra amor apareceu %d vezes\n\n", amr);

     system("pause");

     return 0;
 }
