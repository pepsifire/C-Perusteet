#include <stdio.h>
#include <stdlib.h>

int tarkistaJuomanKelvollisuus(int arvosanat[]);

int main()
{
    int juomienKelvollisuus[3] = {0};
    int arvosanat[9] = {0};
    int arvosana;
    int i,j,k;

    for(i = 0; i < 4; i++)
    {
        printf("Anna juoma numero %d. pisteet\n",i+1);

        for(j = 0; j < 10; j++)
        {
            printf("Anna arvosana (1-5) > ");
            scanf("%d",&arvosana);
            if(arvosana < 1 || arvosana > 5)
            {
                printf("ARVOSANAN TULEE OLLA VALILTA 1 - 5!\n");
            }
            else
            {
                arvosanat[i] = arvosana;
                printf("\nOK!\n");
            }

        }
        if(tarkistaJuomanKelvollisuus(arvosanat) == 1)
        {

            juomienKelvollisuus[i] = 1;
        }
    }




    for(k = 0; k < 4; k++)
    {
        printf("Juoma numero %d on ",k+1);
        if(juomienKelvollisuus[k] == 1) {
            printf("kelvollista\n");
        } else {
            printf("kelvotonta\n");
        }

    }


}





int tarkistaJuomanKelvollisuus(int arvosanat[])
{
    int kelvollinen = 0;
    int i;
    for(i = 0; i < 10; i++)
    {
        if(arvosanat[i] >= 3)
        {
            kelvollinen++;
        }

    }
    if(kelvollinen >= 5)
    {
        return 1;
    }
    else
    {
        return -1;
    }

}
