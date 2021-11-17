#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 80567;

        for(int i = 0 ; i < 100 ; i++){
        printf("%d",n+i);
        if((n+i)%2==0){
            printf(" 2parzysta");
            if(i==60){
                continue;
            }
        }
        if(i==95){
            break;
        }

        printf("\n");
        }

    return 0;
}
