#include <stdio.h>

int main()
{
    double g;

    printf("glicose: ");
    scanf("%lf", &g);

    if(g<=100)
    {
        printf("Glicose: NORMAL");
    }
    else if(g>100 && g<=140)
    {
        printf("Glicose: ELEVADO");
    }
    else
    {
        printf("Glicose: DIABETES");
    }

    return 0;
}
