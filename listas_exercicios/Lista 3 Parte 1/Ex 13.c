/*--------13) Solicitar uma palavra (4 a 12 caracteres) e apresentar cada um dos caracteres
adicionando o valor 20 ao código ASCII e também a posição do caractere na palavra---------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 int main()
 {
     char pal[12];

     printf("Digite uma palavra de 4 a 12 letras: ");
     gets(pal);

     while(strlen(pal)<4 || strlen(pal)>12)
     {
         system("cls");

         printf("A palavra deve ter entre 4 a 12 caracteres\n\nPor favor tente novamemte: ");
         gets(pal);
     }

     for(int i=0; i<strlen(pal); i++)
     {
         printf("%c ", pal[i]+20+i);
     }

     printf("\n\n");

     system("cls");

     return 0;
 }
