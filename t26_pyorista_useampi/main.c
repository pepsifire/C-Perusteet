#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pyoristaKokonaisluvuksi(double n);
double pyoristaKymmenesosat(double n);
double pyoristaSadasosat(double n);
double pyoristaTuhannesosat(double n);

int main()
{
    double syote;
    double kok,kym,sad,tuh;
    int i;

    for(i = 0; i <= 5; i++) {

    scanf("%lf",&syote);

    kok = pyoristaKokonaisluvuksi(syote);
    kym = pyoristaKymmenesosat(syote);
    sad = pyoristaSadasosat(syote);
    tuh = pyoristaTuhannesosat(syote);

    printf("%lf %lf \n",syote,kok);
    printf("%lf %lf \n",syote,kym);
    printf("%lf %lf \n",syote,sad);
    printf("%lf %lf \n",syote,tuh);
    }

}


double pyoristaKokonaisluvuksi(double n) {

    return floor(n + 0.5);

}

double pyoristaKymmenesosat(double n) {

    return floor(n*10 + 0.5)/10;

}

double pyoristaSadasosat(double n) {

    return floor(n*100 + 0.5)/100;

}

double pyoristaTuhannesosat(double n) {

    return floor(n*1000 + 0.5)/1000;

}
