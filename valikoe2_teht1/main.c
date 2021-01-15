#include <stdio.h>
#include <stdlib.h>

double laskeKeskiarvo(int[], int);

int main()
{
    int taulukko[5];
    double keskiarvo;

    taulukko[0] = 5;
    taulukko[1] = 45;
    taulukko[2] = 34;
    taulukko[3] = 56;
    taulukko[4] = 4;
    taulukko[5] = 99;

    keskiarvo = laskeKeskiarvo(taulukko, 5);

    printf("Keskiarvo: %0.2lf",keskiarvo);
}


double laskeKeskiarvo(int taulukko[], int taulukonKoko) {

    int i;
    double tulos = 0;

    for(i = 0; i <= taulukonKoko; i++) {
        tulos += taulukko[i];
    }
    tulos = tulos / taulukonKoko;

    return tulos;
}
