#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tehdytTunnit,
           tuntipalkka,
           veroprosentti,
           tulos,
           veronOsuus;

    //printf("Tehdyt tunnit > ");
    scanf("%lf", &tehdytTunnit);
    //printf("Tuntipalkka > ");
    scanf("%lf", &tuntipalkka);
    //printf("Veroprosentti > ");
    scanf("%lf", &veroprosentti);

    tulos = tehdytTunnit * tuntipalkka * (1 - veroprosentti/100);
    veronOsuus = tehdytTunnit * tuntipalkka * (veroprosentti/100);

    printf("Nettopalkkasi on %0.2lf euroa josta veron osuus on %0.2lf euroa", tulos, veronOsuus);
}
