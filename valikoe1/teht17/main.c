#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rivit,i,j;

    rivit = 6;

    for(i = rivit; i>=1;i--) {

        for(j = 1; j <= i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
