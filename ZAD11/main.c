#include <stdio.h>
#include <stdlib.h>

int main()
{

    int fib [10];
    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2 ; i < 10; i++){
        fib[i]= fib[i-1]+fib[i-2];
    }

    printf("10 pierwszych wyrazow ciagu fib.: ");

    for(int i = 0 ; i < 10 ; i++){
        printf("%d, ",fib[i]);
    }

    return 0;
}
