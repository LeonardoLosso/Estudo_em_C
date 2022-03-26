#include <stdio.h>

int main()
{
    int a, b, c, m;

    printf("1 numero: ");
    scanf("%d", &a);
    m=a;
    printf("2 numero: ");
    scanf("%d", &b);
    if(b<m)
    {
        m=b;
    }
    printf("3 numero: ");
    scanf("%d", &c);
    if(c<m)
    {
        m=c;
    }

    printf("MENOR: %d", m);

    return 0;
}
