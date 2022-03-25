/*------23)Solicite uma frase e informe ao usuário se a palavra “AMOR” está ou não na frase-------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[100], aux[10];
    const char amor[]="amor";
    int amr=0, cmp;

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
        if(frase[i] == 'a')
        {
            strcpy(aux, "love");

            for(int j=0; j<strlen(amor); j++)
            {

                if(frase[i+j]==amor[j])
                {
                    aux[j]=frase[i+j];

                    if(strcmp(amor, aux)==0)
                    {
                        if(frase[i+4] ==' ' || frase[i+4] == '\0' || frase[i+4] == '.' || frase[i+4] == ',')
                        {
                            amr++;
                        }
                    }
                }
            }
        }
    }

    printf("\n\nA palavra AMOR apareceu %d vezes na frase\n\n", amr);

    system("pause");

    return 0;
}
