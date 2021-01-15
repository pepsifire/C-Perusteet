#include <stdio.h>
#include <stdlib.h>

int main()
{
    int syote;
    double keskikulutus,
    kokonaiskeskikulutus,
    ajetutKilometrit,
    bensamaara,
    kaikkiAjetutKilometrit,
    kaikkiBensamaara;

    bensamaara = 0;
    keskikulutus = 0;
    kokonaiskeskikulutus = 0;
    ajetutKilometrit = 0;
    kaikkiAjetutKilometrit = 0;
    kaikkiBensamaara = 0;

    while(0==0) {



    printf("Anna tankatun bensiinin maara (-1 lopettaa) > ");
    scanf("%d",&syote);
        if(syote==-1) {
            break;
        }
    bensamaara = syote;
    kaikkiBensamaara += bensamaara;


    printf("Ajetut kilometrit > ");
    scanf("%lf", &ajetutKilometrit);

    keskikulutus = bensamaara/(ajetutKilometrit/100);
    kaikkiAjetutKilometrit += ajetutKilometrit;

    printf("Keskikulutus talla tankkauksella on %0.3lfl/km\n",keskikulutus);

    }
    kokonaiskeskikulutus = kaikkiBensamaara/(kaikkiAjetutKilometrit/100);
    printf("kokonaiskeskikulutus on %0.2lfl/km", kokonaiskeskikulutus);
}
