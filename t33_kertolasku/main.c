#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int luoNumero();

int main()
{
    srand(time(NULL)); //rng
    int syote;
    int num1=0,num2=0;
    int oikeaVastaus;

    for(;;)
    {
        num1 = luoNumero();
        num2 = luoNumero();
        oikeaVastaus = num1*num2;
        printf("Anna luku -1 lopettaaksesi\n");
        printf("Paljonko on %d kertaa %d? ",num1,num2);
        scanf("%d",&syote);
        if(syote == -1)
        {
            break;
        }
        for(;;)
        {
            if(syote == oikeaVastaus)
            {
                printf("Oikein!\n");
                break;
            }
            else if (syote != oikeaVastaus)
            {

                printf("Väärin, yritä uudelleen > ");
                for(;;)
                {
                    scanf("%d",&syote);
                    if(syote == oikeaVastaus)
                    {
                        break;
                    }
                }

            }

        }
        break;
    }
}

int luoNumero()
{
    int numero;
    numero = 1 + rand() % 9; //1-9

    return numero;

}
