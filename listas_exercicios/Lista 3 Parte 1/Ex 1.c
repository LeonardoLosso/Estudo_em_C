//-----------1) Solicitar uma palavra e apresentar a quantidade de caracteres na mesma----------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 int main ()
 {
     char palavra[30];

     printf("Digite uma palavra: ");
     gets(palavra);

     printf("\n\n");

     printf("%s tem %d letras \n\n", palavra, strlen(palavra));

     system("pause");

     return 0;
 }
