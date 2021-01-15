#include <stdio.h>
#include <stdlib.h>

int main()
{
    int syote;
    int binaari,desimaali = 0,jakojaannos, kanta = 1;

    scanf("%d",&syote);

    binaari = syote;

    while (syote > 0) {
        jakojaannos = syote % 10;
        desimaali = desimaali + jakojaannos * kanta;
        syote = syote / 10;
        kanta = kanta * 2;
    }

    printf("%d",desimaali);


}
