#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int luoNumero();
int kertoTaiJako();

int main()
{
    srand(time(NULL)); //rng
    int syote;
    int num1=0,num2=0;
    int oikeaVastaus;
    int paatos;

    for(;;)
    {
        printf("Anna luku -1 lopettaaksesi\n");
        paatos = kertoTaiJako();
        if(paatos == 0)
        {
            num1 = luoNumero();
            num2 = luoNumero();
            oikeaVastaus = num1*num2;
            //printf("\nKertolasku!\n");
            printf("Paljonko on %d kertaa %d? ",num1,num2);


        }
        else  if (paatos == 1)
        {
            //jakolaskuun tarvitaan numerot joilla ei ole jakojäännöstä
            num1 = luoNumero();
            num2 = luoNumero();
            while(num1 % num2 != 0) {
                num1 = luoNumero();
                num2 = luoNumero();
            }
            oikeaVastaus = num1/num2;
            //printf("\nJakolasku!\n");
            printf("Paljonko on %d jaettuna %d? ",num1,num2);
        }


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
                for(;;) {
                    scanf("%d",&syote);
                    if(syote == oikeaVastaus) {
                        break;
                    }
                }


            }

        }

    }
}


int luoNumero()
{
    int numero;
    numero = 1 + rand() % 9; //1-9

    return numero;

}

int kertoTaiJako()
{
    //kerto = 0, jako = 1
    int paatos;
    paatos = rand() % 2; //0 tai 1


    return paatos;
}
