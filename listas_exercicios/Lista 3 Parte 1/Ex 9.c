//-----------9) Solicitar uma palavra e apresentá-la em ordem inversa. (ex. AMOR = ROMA)-------------------
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pal[20], jersin[20];
    int x;

    printf("Digite uma palavra: ");
    gets(pal);

    x=strlen(pal);


    for(int i=0; i!=x; i++)
    {
        jersin[i]=pal[x-i-1];
    }

    jersin[x]='\0';

    printf("\n\n%s\n\n", jersin);

    system ("pause");

    return 0;
}
