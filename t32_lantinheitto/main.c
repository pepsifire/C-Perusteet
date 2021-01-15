#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define kruuna 0
#define klaava 1

int heitaKolikkoa();

int main()
{
    int kolikko,i;
    int kruunat=0,klaavat=0;
    srand(time(NULL)); //alustetaan rng



    for(i = 0; i < 100; i++)
    {
        kolikko = heitaKolikkoa();
        //printf("kolikko: %d\n",kolikko);
        if(kolikko == 1)
        {
            kruunat++;
        }
        else if (kolikko == 0)
        {
            klaavat++;
        }

    }
    printf("Heittojen tulos: %d kruunua ja %d klaavaa",kruunat,klaavat);
}


int heitaKolikkoa()
{

    int kolikko;
    kolikko = rand() % 2;
    return kolikko; //0 tai 1


}
