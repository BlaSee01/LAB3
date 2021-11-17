#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab [10][10];

    for(int i = 0 ; i < 10 ; i++){
            printf("\n");
        for(int j = 0 ; j < 10 ; j++){
            tab[i][j]=(i+1)*(j+1);
            printf("[%dx%d]: %d " , i+1,j+1,tab[i][j]);
        }
    }



    return 0;
}
