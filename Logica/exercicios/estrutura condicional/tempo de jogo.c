#include <stdio.h>

int main()
{
    int i, f, dur;

    printf("hora inicial: ");
    scanf("%d", &i);
    printf("hora final: ");
    scanf("%d", &f);

    if(i==f)
    {
        dur=24;
    }
    else if(i>f)
    {
        dur=(24-i)+f;
    }
    else
    {
        dur=f-i;
    }
    printf("DURACAO: %d H", dur);

    return 0;
}
