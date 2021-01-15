#include <stdio.h>
#include <stdlib.h>

int main()
{
    int etuperin[9];
    int takaperin[9];
    int i,j=9;
    int syote;

    for(i = 0; i < 10; i++) {
        printf("Syötä %d. luku >",i+1);
        scanf("%d",&syote);
        etuperin[i] = syote;
        takaperin[j] = syote;
        j--;


    }
    j = 0;
    for(i = 0;i < 10; i++) {
        printf("%d  %d\n",etuperin[i],takaperin[j]);
        j++;
    }




}
