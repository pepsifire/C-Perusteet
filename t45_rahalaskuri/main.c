#include <stdio.h>
#include <stdlib.h>

void printtaaPalkkarivi(int summa);
int erottelePalkka(int);

int main()
{
    int tyontekijoidenmaara = 5;
    int tyontekijanpalkka[5];
    int rahayksikot[9] = {1,2,5,10,20,50,100,200,500};
    int i;
    int syote;

    for(i = 0; i < tyontekijoidenmaara;i++) {
        printf("Anna %d. tyontekijan palkka > ",i+1);
        scanf("%d",&syote);
        tyontekijanpalkka[i] = syote;

    }
    printf("Palkka  1 € 	2 € 	5 € 	10 € 	20 € 	50 € 	100 € 	200 € 	500 € \n");
    erottelePalkka(500);
}

void printtaaPalkkarivi(int summa) {

    printf("%d",summa);

}

int erottelePalkka(int summa) {
    int taulukko[9] = {0}; //1,2,5,10,20,50,100,200,500
    int testiSumma = summa;

    int ykkoset = testiSumma % 10;
    int kympit = (testiSumma/10)%10;
    int viissataset = (testiSumma/500)%10;
    int kakssataset = (testiSumma/200)%10;
    int tuhannet = testiSumma/1000;
    printf("viissataset: %d kakssataset: %d kympit: %d ykkoset: %d",viissataset,kakssataset,kympit,ykkoset);

    return 0;
}
