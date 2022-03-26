#include <stdio.h>

int main()
{
//-------var-----------
    int es, c;
    char i;

//------inicio----------
    do
    {
        printf("\n-----------------\n");
        printf("| E S C O L H A |\n");
        printf("-----------------\n");
        printf("| [1] - 1 a 10  |\n");
        printf("| [2] - 10 a 1  |\n");
        printf("| [3] - S A I R |\n");
        scanf("%d", &es);
//------if 1---------------
        if(es==1)
        {
           c=1;
           do
           {
               printf("%d. .", c);
               c=c+1;
           }while(c<=10);
        }
//------if 2---------------
        if(es==2)
        {
            c=10;
            do
            {
                printf("%d. .", c);
                c=c-1;
            }while(c>=1);
        }
    }while(es!=3);


    return 0;
}
