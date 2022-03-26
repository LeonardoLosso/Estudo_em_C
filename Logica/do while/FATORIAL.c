#include <stdio.h>
#include <string.h>

int main()
{
//------var-------
    int c, n, f;
    char r;
//------inicio-----
    do
    {
        printf("Informe um numero para fatorial\n: ");
        scanf("%d", &n);
        c=n;
        f=1;

        do
        {
            f=f*c;
            c=c-1;
        }while(c>1);

        printf("O fatorial de %d eh: %d\n\n", n, f);
        printf("Quer fazer outro fatorial? [S/N]\n");
        fseek(stdin, 0, SEEK_END);
        scanf("%c", &r);
    }while(r!='n');

    return 0;
}
