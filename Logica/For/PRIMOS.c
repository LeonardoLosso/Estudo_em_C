#include <stdio.h>


int main()
{
    int x, primos;


    for (x=1; x<=500; x++)
    {
        if(x%2!=0 || x%3!=0 || x%5!=0 || x%7!=0)
        {
            printf(", %d", x);
        }
    }
    return 0;
}
