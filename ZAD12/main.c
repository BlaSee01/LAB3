#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 6;
    int b = 8;

    int *x = &a;
    int *y = &b;

    printf("a: Wartosc: %d; Adres: %d\n" , a,x);
    printf("b: Wartosc: %d; Adres: %d\n\n" , b,y);

    if(a>b){
        printf("Adres wiekszej liczby: %d" , x);
    }else{
        printf("Adres wiekszej liczby: %d" , y);
    }

    if(x>y){
        printf("\nWartosc zmiennej o wiekszym adresie: %d" , a);
    }else{
        printf("\nWartosc zmiennej o wiekszym adresie: %d" , b);
    }

    return 0;
}
