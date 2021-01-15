#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taulukko[20];
    int syote;
    int i,j,k;
    int laskin = 0;


    for(i =0;i<20;i++) {

        printf("Syotä %d. luku >",i+1);
        scanf("%d",&syote);
        for(;;) {
        if(syote >= 10 && syote <= 100) {
            taulukko[i] = syote;
            break;
        } else {
            printf("Ei kelpaa!\n");
            printf("Yrita uudelleen >");
            scanf("%d",&syote);
        }
        }
    }

    for(i = 0; i <20; i++) {
        laskin = 0;
        for(j=0,k=19;j<k+1;j++) {
            if(i!=j) {
                if(taulukko[i]==taulukko[j]) {
                    laskin++;
                }
            }


        }
        if(laskin==0) {
            printf("%d\n",taulukko[i]);
        }



    }



}
