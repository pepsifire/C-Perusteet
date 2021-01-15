#include <stdio.h>
#include <stdlib.h>

double palautaSuurinArvo(double[], int);

int main()
{
    double taulukko[] = {4.5,46.7,45.6,35.9,23.4};
    int taulukonKoko = sizeof(taulukko)/sizeof(taulukko[0]);
    double suurin;

    suurin = palautaSuurinArvo(taulukko, taulukonKoko);

    printf("Suurin: %0.2lf",suurin);

}

double palautaSuurinArvo(double taulukko[], int taulukonKoko) {
    double suurin;
    int i;
    suurin = taulukko[0];

    for(i = 0; i <= taulukonKoko; i++) {
        if(taulukko[i] > suurin) {
            suurin = taulukko[i];
        }
    }

    return suurin;
}
