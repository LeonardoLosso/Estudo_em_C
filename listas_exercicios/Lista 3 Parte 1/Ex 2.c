//----------2) Solicite uma palavra e apresente os 4 primeiros caracteres----------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 int main ()
 {
     char str[20], lala[20];

     printf("Digite uma palavra: ");
     gets(str);

     strncpy(lala, str, 4);
     lala[4]='\0';

     printf("\n\n%s \n\n", lala) ;


     system("pause");

     return 0;
 }
