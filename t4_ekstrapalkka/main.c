#include <stdio.h>
#include <stdlib.h>

int main()
{

    double
    tehdytTunnit,
    tuntipalkka,
    veroprosentti,
    palkkaKerroin,
    tulos,
    veronOsuus;

    printf("Sy�t� tehdyt tunnit, tuntipalkka ja veroprosentti\n");

    printf("Tehdyt tunnit: ");
    scanf("%lf", &tehdytTunnit);

    printf("Sy�t� tuntipalkka: ");
    scanf("%lf", &tuntipalkka);

    printf("Sy�t� veroprosentti: ");
    scanf("%lf", &veroprosentti);

    if (tehdytTunnit > 40)
    {
        palkkaKerroin = 1.5;
        printf("palkkakerroin 1.5\n");
    }
    else
    {
        palkkaKerroin = 1;
        printf("palkkakerroin 1\n");
    }

    tulos = palkkaKerroin * tehdytTunnit * tuntipalkka * (1 - veroprosentti/100);
    veronOsuus = palkkaKerroin * tehdytTunnit * tuntipalkka * (veroprosentti/100);

    printf("Nettopalkkasi on %0.2lf euroa josta veron osuus on %0.2lf euroa", tulos, veronOsuus);

}
