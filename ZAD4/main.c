#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tab [15];
    int suma = 0;

    for(int i = 0 ; i < 15 ; i++){
        tab[i] = pow(15+i,2);
        suma+=tab[i];
        printf("%d ",tab[i]);
    }

    printf("\n\nSuma: %d",suma);

    return 0;
}
