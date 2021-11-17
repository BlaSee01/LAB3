#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1a [5] = {1,2,3,4,5};
    char t1b [5];

    for(int i = 0 ; i < 5 ; i++){
        t1b[i]='A'+i;
    }

    printf("Zawartosc T1a: ");

    for(int i = 0 ; i < 5 ; i++){
        printf("%d ",t1a[i]);
    }

    printf("\n\nZawartosc T1b: ");

    for(int i = 0 ; i < 5 ; i++){
        printf("%c ",t1b[i]);
    }

    // 2-WYMIAROWE

    int t2a [2][3];
    char t2b [2][3] = {{'A','B','C'},{'D','E','F'}};
    int licznik = 0;

    printf("\n\nZawartosc T2a: \n");

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            t2a[i][j]=1+licznik;
        if(i==1 && j==0){
            printf("\n%d ",t2a[i][j]);
        }else{
            printf("%d ",t2a[i][j]);
        }
        licznik++;
        }
    }


    licznik = 0;
    printf("\n\nZawartosc T2b: \n");

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        if(i==1 && j==0){
            printf("\n%c ",t2b[i][j]);
        }else{
            printf("%c ",t2b[i][j]);
        }
        licznik++;
        }
    }





    return 0;
}
