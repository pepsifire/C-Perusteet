#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rivi, i, j;

    rivi = 5;

    for(i=1; i<=rivi; i++) //loopataan viidesti
    {

        for(j=1; j<i; j++) //lis�t��n aina yksi space joka kerta lis��
        {
            printf(" ");
        }


        for(j=1; j<=(rivi*2 -(2*i-1)); j++)
        {
            printf("*");
        }

        printf("\n"); //seuraava rivi
    }

    return 0;
}
