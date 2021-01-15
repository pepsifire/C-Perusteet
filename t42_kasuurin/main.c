#include <stdio.h>
#include <stdlib.h>


int suurinArvo(int taulukko[], int koko);
int etsiLuvunIndeksi(int luku, int taulukko[], int koko);

int main()
{
    int syote;
    int suurin;
    int indeksi;
    int i,j,k;
    int taulukko[9];
    int koko;
    double keskiarvo;

    for(i = 0; i < 10; i++)
    {

        for(;;)
        {
            printf("Anna %d. kokonaisluku > ",i+1);
            scanf("%d",&syote);
            if(syote >= 0 && syote <= 100)
            {
                taulukko[i] = syote;
                keskiarvo += syote;
                break;
            }
        }

    }

    printf("Taulukon:\n");
    for(i=0;i<10;i++) {
        printf("%d ",taulukko[i]);
    }
    koko = sizeof(taulukko)/sizeof(int);
    suurin = suurinArvo(taulukko,koko);
    indeksi = etsiLuvunIndeksi(suurin,taulukko,koko);
    printf("\nSuurin arvo on %d, ja se sijaitsee paikassa %d\n",suurin,indeksi);
    keskiarvo = keskiarvo/(koko+1);
    printf("Taulukon arvojen keskiarvo on %0.2lf",keskiarvo);

}

int suurinArvo(int taulukko[], int koko) {
    int i=0;
    int suurin = taulukko[i];


    for (i = 0; i <= koko; i++) {
        if(taulukko[i] > suurin) {
            suurin = taulukko[i];
        }
    }
    return suurin;

}

int etsiLuvunIndeksi(int luku, int taulukko[], int koko) {
    int i = 0;

    for(i = 0; i<=koko;i++) {
        if(taulukko[i] == luku) {
            return i;
        }
    }
    return -1;
}

