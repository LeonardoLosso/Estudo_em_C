#include <stdio.h>
#include <math.h>

int main()
{
//------------INSERÇÃO MATRIZ---------------

    int matriz[3][3]={2,0,1,-2,1,3,4,2,5};

//------------PRINTA MATRIZ-----------------

    for(int i=0; i<3; i++)  //linha
    {
        for(int j=0; j<3; j++)    //coluna
            {
                printf("%4d ", matriz[i][j]);
            }
            printf("\n");
    }

    printf("\n----------------------\n\n");

//------------DETERMINANTE------------------

    int det, a[2][2], b[2][2], c[2][2];

    int x=0, y=0;

    for(int i=0; i<3; i++)  //lida com as linhas
    {
        for(int j=0; j<3; j++)
        {
            b[x][y]=matriz[i][j];
            printf("%d ",b[x][y]);
            y++;
        }
        x++;
        y=0;
        printf("\n");
    }
    printf("\n\n");

    x=0;
    y=0;

    for(int i=1; i<3; i++)  //lida com as linhas
    {

        for(int j=1; j<3; j++)
        {

            a[x][y]=matriz[i][j];
            printf("%d ",a[x][y]);
            y++;
        }
        printf("\n");
        x++;
        y=0;
    }
    printf("\n\n");

    x=0;
    y=0;

    for(int i=1; i<3; i++)  //lida com as linhas
    {
        for(int j=1; j<3; j++)
        {
            if(j!=1)
            {
                c[x][y]=matriz[i][j];
                printf("%d ",c[x][y]);
                y++;
            }
            x++;
            y=0;
        }
        printf("\n");
    }
    printf("\n\n");

     for(int i=0; i<3; i++)  //lida com as linhas
    {
        for(int j=0; j<3; j++)
        {

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    int a11, a12, a13;

    a11=((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
    a12=-1*((b[0][0]*b[1][1])-(b[0][1]*b[1][0]));
    a13=((c[0][0]*c[1][1])-(c[0][1]*c[1][0]));

    printf("\n\n%d\n\n", a11);

    det=(matriz[0][0]*a11)+(matriz[0][1]*a12)+(matriz[0][2]*a13);

    printf("\n\n DETERMINANTE: %d\n\n", det);

    return 0;
}
