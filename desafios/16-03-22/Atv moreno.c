#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char frase[50];

    printf("insira uma frase entre 10 e 50 caracteres: ");
    gets(frase);

    while(strlen(frase)<10 || strlen(frase)>50)
    {
        system("cls");

        printf("A frase deve ter entre 10 e 50 caracteres\n\nPor favor tente novamente: ");
        gets(frase);
    }

    printf("\n\n");

//------------------MAIUSCULO---------------

    printf("MAIUSCULO: ");

    for(int i=0; i<strlen(frase); i++)
    {
        printf("%c", toupper(frase[i]));
    }

    printf("\n\n");

//-----------------MINUSCULO---------------

    printf("MINUSCULO: ");

    for(int i=0; i<strlen(frase); i++)
    {
        printf("%c", tolower(frase[i]));
    }

    printf("\n\n");

//--------------MAIUSC E MINUSC---------------

    printf("ALTERNA MAIUSC/MINUSC: ");

    for(int i=0; i<strlen(frase); i++)
    {
        if(i%2==0)
        {
            printf("%c", toupper(frase[i]));
        }
        else
        {
            printf("%c", tolower(frase[i]));
        }
    }

    printf("\n\n");

//---------------FRASE INVERTIDA--------------

    printf("FRASE INVERTIDA: ");

    for(int i=strlen(frase)-1; i>=0; i--)
    {
        printf("%c", frase[i]);
    }

    printf("\n\n");

//---------------QUANTIDADE DE VOGAIS---------

    char vogais[]="aeiouAEIOU";
    int qtd=0;

    for(int i=0; i<strlen(frase); i++)
    {
        for(int j=0; j<strlen(vogais); j++)
        {
            if(frase[i]==vogais[j])
            {
                qtd++;
            }
        }
    }

    printf("Quantidade de vogais: %d \n\n", qtd);

//------------QUANTIDADE DE CONSOANTES----------

    qtd=0;
    int b;

    for(int i=0; i<strlen(frase); i++)
    {
        b=0;
        if(frase[i]!=32)
        {
            for(int j=0; j<strlen(vogais); j++)
            {
                    if(frase[i]==vogais[j])
                    {
                        b=1;
                    }
            }
            if(b==0)
            {
                qtd++;
            }
        }
    }

    printf("Quantidade de consoantes: %d \n\n", qtd);

//-------------QUANTIDADE DE ESPAÇOS----------

    qtd=0;

    for(int i=0; i<strlen(frase); i++)
    {
        if(frase[i]==32)
        {
            qtd++;
        }
    }

    printf("Quantidade de espacos: %d \n\n", qtd);

//---------------PRIMEIRA PALAVRA----------------
    b=0;

    printf("PRIMEIRA PALAVRA: ");

    while(frase[b] != 32)
    {
        printf("%c", frase[b]);

        b++;
    }

    printf("\n\n");

//---------------ULTIMA PALAVRA-----------------

    b=strlen(frase);

    while(frase[b]!=32) //caça espaço
    {
        b--;
    }

    printf("ULTIMA PALAVRA: ");

    for(b=b+1; b<strlen(frase); b++)    //imprie palavra
    {
        printf("%c", frase[b]);
    }

    printf("\n\n");

    system("pause");

    return 0;
}
