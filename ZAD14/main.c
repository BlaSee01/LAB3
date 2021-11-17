#include <stdio.h>
#include <stdlib.h>

void funkcja(int *a, int *b){
    if(*a>*b){
        *a=*a+*b;
        printf("%d" , *a);
    }else{
        *b=*b+*a;
        printf("%d" , *b);
    }
}

int main()
{

    int a = 1;
    int b = 2;

    int *w = &a;
    int *q = &b;

    funkcja(w,q);

    return 0;
}
