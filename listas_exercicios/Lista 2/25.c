#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf ("2.. 3 .. 5.. 7..");

    for(int i=8; i<=500; i++)
    {
        if(i%2!= 0 && i%3!=0 && i%5!=0 && i%7!=0)
        {
            printf(" %d..", i);
        }
    }
    printf("\n\n");
    system ("pause");

    return 0;
}
