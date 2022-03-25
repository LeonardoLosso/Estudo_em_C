#include <stdio.h>

int main()
{
    int x, y, s, troca;
    s=0;

    printf("Declare X: ");
    scanf("%d", &x);
    printf("Declare Y: ");
    scanf("%d", &y);

    if(x>y)
    {
        troca=x;
        x=y;
        y=troca;
    }
    for(int i=x+1; i<y; i++)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
    }

    printf("\nSOMA DOS IMPARES = %d\n", s);

    return 0;
}
