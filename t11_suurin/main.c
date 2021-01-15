#include <stdio.h>
#include <stdlib.h>

int main()
{
    int syote;
    int i;
    int suurin;
    suurin = 0;
    for(i = 0; i <= 10; i++) {
        scanf("%d",&syote);

        if(syote > suurin) {
            suurin = syote;
        }
    }

    printf("Suurin syottamasi luku oli %d", suurin);
}
