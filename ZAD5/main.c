#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tab [15] = {81,35,2,69,26,34,70,13,10,22,64,39,4,5,91};

    int max, min = tab[0];

    for(int i = 1 ; i < 15 ; i++){
        if(tab[i]>max){
            max = tab[i];
        }else if(tab[i]<min){
            min = tab[i];
        }
    }

    printf("MAX: %d (indeks: %d), MIN: %d (indeks: %d).",max,&max,min,&min);

    return 0;
}
