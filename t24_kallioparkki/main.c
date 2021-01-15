#include <stdio.h>
#include <stdlib.h>

double laskeParkkiMaksu(double n);

int main()
{
    int asiakas;

    double veloitus,tunnit[3];
    double tunnityht=0,veloitusyht=0;

    for(asiakas = 0; asiakas <= 2; asiakas++)
    {

        //printf("%d: Pysäköintiaika: ",asiakas+1);
        scanf("%lf",&tunnit[asiakas]);
        tunnityht += tunnit[asiakas];


    }
    printf("Asiakas Tunnit Veloitus\n");
    for(asiakas = 0; asiakas <= 2; asiakas++)
    {
        veloitus = laskeParkkiMaksu(tunnit[asiakas]);
        veloitusyht += veloitus;
        printf("%d %0.2lf %0.2lf\n",asiakas+1,tunnit[asiakas],veloitus);



    }
    printf("YHTEENSA %0.2lf %0.2lf",tunnityht,veloitusyht);



}

double laskeParkkiMaksu(double n)
{
    double tulos = 0.0;
    int i;

    if(n < 24)
    {

        if(n > 3)
        {
            tulos = 2;
            for(i = n-3; i>0; i--)
            {
                tulos += 0.5;
            }

        }
        else
        {
            tulos = 2;
        }

    }
    else
    {

        tulos = 10;
    }



    return tulos;
}
