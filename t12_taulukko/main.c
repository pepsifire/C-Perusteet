#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("N      10*N   100*N  1000*N\n");

    for(i = 1; i <= 9;i++) {
        printf("%d      %d     %d    %d\n",i,i*10,i*100,i*1000);
    }
    i=10;
    printf("%d     %d    %d   %d\n",i,i*10,i*100,i*1000);
}
