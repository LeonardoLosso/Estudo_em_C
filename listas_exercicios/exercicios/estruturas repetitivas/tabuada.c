#include <stdio.h>

int main()
{
    int n, p, i;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);
    printf("\n");

    for(i=1; i<=10; i++)
    {
        p=n*i;
        printf(" %d X %d = %d \n",n, i, p);
    }

    return 0;
}
