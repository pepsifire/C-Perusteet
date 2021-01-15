#include <stdio.h>
#include <stdlib.h>



int main(void)

{
    int tuntipalkka;
    int tehdyt_tunnit;
    int bruttopalkka;

    printf("Anna tuntipalkka > ");
    scanf("%d", &tuntipalkka);
    printf("Tehdyt tunnit > ");
    scanf("%d", &tehdyt_tunnit);
    bruttopalkka = tuntipalkka * tehdyt_tunnit;
    printf("Bruttopalkkasi on %d euroa", bruttopalkka);

}
