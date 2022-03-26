#include <stdio.h>
#include <string.h>

int main ()
{
//------INICIO
    int n;

    printf("Quantos produtos vai cadastrar? ");
    scanf("%d", &n);

//------VETORES LOOPS-------------
    char produto[n][20];
    double compra[n], venda[n], pct[n];

 //-----------CADASTRO------------
    for(int i=0; i<n; i++)
    {
        printf("\n---------------------------\n");

        printf("%d.o PRODUTO: ", i+1);
        fflush(stdin);
        gets(produto[i]);

        printf("PRECO DE COMPRA: ");
        scanf("%lf", &compra[i]);

        printf("PRECO DE VENDA: ");
        scanf("%lf", &venda[i]);
    }

//-----------PERCENTUAL DE LUCRO-----------
    int abaixo=0, entre=0, acima=0;


    for(int i=0; i<n; i++)
    {
        pct[i]=(venda[i]-compra[i])/compra[i]*100;

        if(pct[i]<10)
        {
            abaixo++;

        }
        else if(pct[i]<20)
        {
            entre++;
        }
        else
        {
            acima++;
        }
    }

//----------TOTAL------------
    double totv=0, totc=0, totlucro;

    for(int i=0; i<n; i++)
    {
        totv=venda[i]+totv;
        totc=compra[i]+totc;
    }
        totlucro=totv-totc;

//--------RELATORIO----------
    printf("\nR E L A T O R I O:\n\n");

    printf("lucro abaixo de 10%%: %d\nlucro entre 10%% e 20%%: %d \nlucro acima de 20%%: %d\n", abaixo, entre, acima);

    printf("total de compra: R$%.2lf\ntotal de venda: R$%.2lf\nlucro total: R$%.2lf", totc, totv, totlucro);

    return 0;
}
