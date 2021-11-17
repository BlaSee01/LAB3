#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t1 [5] = {'T','E','K','S','T'};
    char t2 [5];

    printf("Zawartosc t1: \n");

    for(int i = 0 ; i < 5 ; i++){
        printf("%c ",t1[i]);
    }

    printf("\n\nZawartosc t2: \n");

    for(int i = 0 ; i < 5 ; i++){
        t2[i] = 'M'+i;
        printf("%c ",t2[i]);
    }

    printf("\n\nWpisz wyraz: \n");

    char t3 [255];
    scanf("%s",&t3);

    printf("\nNapis: %s",t3);

    return 0;
}
