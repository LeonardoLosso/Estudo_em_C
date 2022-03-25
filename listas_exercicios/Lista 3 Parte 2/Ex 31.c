/*---------31) Solicite ao usuário duas palavras e concatene-as em uma terceira variável, alternando
entre os caracteres da primeira e da segunda palavra. (ex: ANA / CLAUDIO = ACNLAAUDIO)------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char p1[20], p2[20], pf[40];
    int j=0, x, y, z=0;

    printf("Digite a primeira palavra: ");
    gets(p1);

    printf("Digite a segunda palavra: ");
    gets(p2);

    x=strlen(p1);
    y=strlen(p2);

    strcat(strcpy(pf,p1), p2);

    z=strlen(pf);

    for(int i=0; i<z; i++)
    {
        if(i%2==0 && j<x-1)
        {
            pf[i]=p1[i];
            j++;
        }
        else if(i%2!=0)
        {
            pf[i]=p2[i];
        }
        else
        {
            pf[i]=p2[i];
        }
    }

    printf("\n\nPALAVRA FINAL: %s\n\n", pf);

    system("pause");

    return 0;
}
