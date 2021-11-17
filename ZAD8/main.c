#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a [12] = "ODSZYFROWANY";
    printf("TEKST ZAPISANY: '%s'",a);
    char b [12];
    char c [12];
    int r = 4;

    printf("\n\nTEKST ZASZYFROWANY: ");

    for(int i = 0 ; i < 12 ; i++){
        b[i] = a[i]+r;
        printf("%c" , b[i]);
    }

    printf("\n\nTEKST ODSZYFROWANY: ");

    for(int i = 0 ; i < 12 ; i++){
        c[i] = b[i]-r;
        printf("%c" , c[i]);
    }

    return 0;
}
