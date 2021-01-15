#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double laskeHypotenuusa(double, double);

int main()
{
    double sivu1,sivu2;
    double tulos;
    scanf("%lf %lf",&sivu1,&sivu2);

    tulos = laskeHypotenuusa(sivu1,sivu2);

    printf("tulos: %lf\n",tulos);
}


double laskeHypotenuusa( double sivu1, double sivu2 ){

        //c^2 = a^2 + b^2

        double a;
        double b;
        double c;

        a = sivu1*sivu1;
        b = sivu2*sivu2;
        c = sqrt(a+b);
        return c;



}
