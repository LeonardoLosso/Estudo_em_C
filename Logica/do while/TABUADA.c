#include <stdio.h>

int main()
{
//-----var-------
    int c, n, r;
//-----inicio-----
    c=1;
    r=1;
    printf("Tabuada de qual numero? ");
    scanf("%d", &n);

    do
    {
        printf("  %d  x  %d  =  %d\n", n, c, r);
        c=c+1;
        r=n*c;
    }while(c<=10);

    return 0;
}
