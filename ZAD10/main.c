#include <stdio.h>
#include <stdlib.h>

int main()
{

    //SORTOWANIE BABELKOWE

    int tab1 [15];

    printf("Zawartosc TAB1: ");

    for(int i = 0 ; i < 15 ; i++){
        tab1[i] = rand()%100+1;    // <1 , 100> W CELACH ESTETYCZNYCH
        printf("%d " , tab1[i]);
    }

    int pom;

    for(int i = 0 ; i < 15 ; i++){
        for(int j = 0 ; j < 15-1-i ; j++){
            pom=tab1[j];
            if(tab1[j]>tab1[j+1]){
                tab1[j]=tab1[j+1];
                tab1[j+1]=pom;
            }
        }
    }

    printf("\nZawartosc TAB2: ");

    for(int i = 0 ; i < 15 ; i++){
        printf("%d " , tab1[i]);
    }

    return 0;
}
