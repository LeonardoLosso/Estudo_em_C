#include <stdio.h>
#include <string.h>

int main()
{
    int tot, n, s, c, r, cob;
    double per;
    char x;
    tot=0;
    s=0;
    c=0;
    r=0;

    printf("Quantos casos de teste? ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        printf("Total de cobaias: ");
        scanf("%d", &cob);
        printf("Tipo de cobaia: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%c", &x);
        tot=tot+cob;
        if(x=='s')
        {
            s=s+cob;
        }
        else if(x=='c')
        {
            c=c+cob;
        }
        else
        {
            r=r+cob;
        }
        printf("\n-------------------------\n");
    }
    printf("RELATORIO: \n\n");
    printf("total de cobaias: %d\n", tot);
    printf("total de sapos: %d\n", s);
    printf("total de coelhos: %d\n", c);
    printf("total de ratos: %d\n", r);
    printf("-----------------------\n");
    per=((double)s/(double)tot)*100;
    printf("percentual de sapos: %.2lf\n", per);
    per=((double)c/(double)tot)*100;
    printf("percentual de coelhos: %.2lf\n", per);
    per=((double)r/(double)tot)*100;
    printf("percentual de ratos: %.2lf\n", per);

    return 0;
}
