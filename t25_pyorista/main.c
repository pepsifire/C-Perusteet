#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pyorista(double n);

int main()
{
    double syote;
    double tulos;
    int i;

    for(i = 0; i <= 5; i++) {

    scanf("%lf",&syote);

    tulos = pyorista(syote);

    printf("%lf %lf\n",syote,tulos);
    }

}


double pyorista(double n) {

    return floor(n + 0.5);

}
