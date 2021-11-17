#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tab1 [7] = {0.2,7.3,8.9,5.2,1.4,9.0,6.6};
    float tab2 [7];

    printf("TAB1: ");

    for(int i = 0 ; i < 7 ; i++){
        tab2[6-i]=tab1[i];
        printf("[%f] ",tab1[i]);
    }

    printf("\n\nTAB2: ");

        for(int i = 0 ; i < 7 ; i++){
        printf("[%f] ", tab2[i]);
    }


    return 0;
}
