#include <stdio.h>
#include <stdlib.h>

void laskeKeskiarvo(double, int);

int main()
{
    double syote;
    double keskiarvo = 0.0;
    int maara = 0;
    int virhe = 0;
    double tulos = 0;

    //printf("Anna reaaliluku ( negat arvo lopettaa ) > ");
    while(1) {
    if (scanf("%lf",&syote) == 1) {
            getchar(); //syödään newline
        //on reaaliluku
        if (syote >= 0) {
            tulos += syote;
        maara += 1;
        }

    } else {
        //ei ollu reaaliluku
        getchar(); //syödään newline
        virhe++;

        printf("\nEi ollut reaaliluku\n");
        while (fgetc(stdin) != '\n') {
            printf("Ei ollut reaaliluku\n");
        }

        printf("Virheellinen syote numero %d\n\n",virhe);
        if (virhe != 3) {
            printf("Ei kelpaa, yrita uudelleen! > \n\n");
        }





    }


    if (virhe == 3) {
        printf("\nVirheellinen syote kolme kertaa. Ohjelma lopetetaan");
        break;
    }
    if (syote < 0) {
        laskeKeskiarvo(tulos, maara);
        break;
    }

    }
}
void laskeKeskiarvo(double keskiarvo, int maara) {

    keskiarvo = keskiarvo / maara;
    printf("%0.2lf",keskiarvo);
}

