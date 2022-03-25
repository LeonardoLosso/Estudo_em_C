/*----------24) Construa um algoritmo que apresente cada uma das vogais e seu respectivo código decimal
ASCII correspondente (cada vogal será uma), tanto maiúsculo quanto minúsculo. Exemplo: A=65 a=97--------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vogais[]="AEIOUaeiou";

    printf("VOGAIS E SEUS CODIGOS\n-------------------------\n\n");

    for(int i=0; i<strlen(vogais); i++)
    {
        printf("%c = %d\n", vogais[i], vogais[i]);
    }

    printf("\n");

    system("pause");

    return 0;
}
