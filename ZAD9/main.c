#include <stdio.h>
#include <stdlib.h>

int main()
{
    // SPOSOB 1
    printf("SPOSOB 1: \n");

    int oceny1 [16] = {4,2,5,3,3,3,2,5,4,2,2,3,5,4,4,2};

    float srednia = 0;
    int max = 0;
    int min = 6;
    int ile_poz = 0;
    int ile_neg = 0;

    for(int i = 0 ; i < 16 ; i++){
        srednia+=oceny1[i];
        if(oceny1[i]>max){
            max = oceny1[i];
        }
        if(oceny1[i]<min){
            min = oceny1[i];
        }
        if(oceny1[i]>2){
            ile_poz++;
        }else{
            ile_neg++;
        }
    }

    printf("Srednia: %f, MAX: %d, MIN: %d, Pozytywnych: %d, Negatywnych: %d.\n",srednia/16,max,min,ile_poz,ile_neg);

    // SPOSOB 2
    printf("\nSPOSOB 2: \nPodaj ilosc ocen: ");
    int ile;
    scanf("%d",&ile);


    int oceny2 [ile];

    printf("\nElementy tablicy: [");

    for(int i = 0 ; i < ile ; i++){
        oceny2[i]=rand()%3+2;
        printf("%d " , oceny2[i]);
    }

    printf("]\n\n");

    float srednia2 = 0;
    int max2 = 0;
    int min2 = 6;
    int ile_poz2 = 0;
    int ile_neg2 = 0;

    for(int i = 0 ; i < ile ; i++){
        srednia2+=oceny2[i];
        if(oceny2[i]>max2){
            max2 = oceny2[i];
        }
        if(oceny2[i]<min2){
            min2 = oceny2[i];
        }
        if(oceny2[i]>2){
            ile_poz2++;
        }else{
            ile_neg2++;
        }
    }

    printf("Srednia: %f, MAX: %d, MIN: %d, Pozytywnych: %d, Negatywnych: %d.\n",srednia2/ile,max2,min2,ile_poz2,ile_neg2);

    return 0;
}
