#include <stdio.h>


//main---------------------------------------------------
int main(){

    int c, t1, t2, t3;

    t1=0;
    t2=1;
    printf("%d ", t1);
    printf("%d ", t2);
    for(c=3; c<=10; c++ ){
        t3=t1+t2;
        t1=t2;
        t2=t3;

        printf("%d ", t3);
    }


return 0;
}
