#include <stdio.h>

int main()
{
//-----var--------
    int c, n, cd;
//-----inicio-----
    c=1;
    cd=0;

    printf("verifique se um numero eh primo: ");
    scanf("%d", &n);

    do
    {
        if(n%c==0)
        {
            cd=cd+1;
        }
        c=c+1;
    }while(c<=n);

    if(cd==2)
    {
        printf("EH PRIMO ! ");
    }
    else
    {
        printf("NAO EH PRIMO ! ");
    }
    return 0;
}
