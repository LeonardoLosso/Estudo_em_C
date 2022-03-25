/*------23)Solicite uma frase e informe ao usuário se a palavra “AMOR” está ou não na frase-------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[100];
    int amr=0;

    printf("Digite uma frase: ");
    gets(frase);

//-----------TRANSFORMA EM MINUSC----------

    for(int i=0; i<strlen(frase); i++)
    {
        frase[i]=tolower(frase[i]);
    }

//-----------CAÇA AMOR-----------------

    for(int i=0; i<strlen(frase); i++)
    {
        if(frase[i] == 'a' && frase[i+1] == 'm' && frase[i+2] == 'o' && frase[i+3] == 'r')
        {
            if(frase[i+4] ==' ' || frase[i+4] == '\0' || frase[i+4] == '.' || frase[i+4] == ',')
            {
                amr++;
            }
        }
    }

    printf("\n\nA palavra AMOR apareceu %d vezes na frase\n\n", amr);

    system("pause");

    return 0;
}
