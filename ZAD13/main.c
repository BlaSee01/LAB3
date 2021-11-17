#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tab [8] = {4,6,2,9,7,8,5,1};

    int *w = tab; // WSKAZNIK NA TABLICE

    for(int i = 0 ; i < 8 ; i++){
        printf("%d ",*w);
        w++;
    }

    int *u = tab;
    *u+=2;
    u+=7;
    *u+=2;

    int *x = tab;

    printf("\n");

    for(int i = 0 ; i < 8 ; i++){
        printf("%d ",*x);
        x++;
    }

    return 0;
}
