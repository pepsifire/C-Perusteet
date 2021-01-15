#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int luoNumero();
int kertoTaiJako();
void lopetus();
void kertolasku();
void jakolasku();

int num1=0,num2=0;
int oikeaVastaus;
int paatos;
int oikeatVastaukset=0,vaaratVastaukset=0, yht = 0;


int main()
{
    srand(time(NULL)); //rng
    int syote;


    for(;;)
    {

        paatos = kertoTaiJako();
        if(paatos == 0)
        {
            kertolasku(&syote, &vaaratVastaukset);
            oikeatVastaukset++;
            yht += vaaratVastaukset;



        }
        else if (paatos == 1)
        {
            jakolasku(&syote, &vaaratVastaukset);
            oikeatVastaukset++;
            yht += vaaratVastaukset;

        }



}}


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

void lopetus()
{
    printf("Sait %d vastausta oikein, ja %d meni pikkuisen pieleen\n",oikeatVastaukset,vaaratVastaukset);
    if(oikeatVastaukset >= vaaratVastaukset)
    {
        printf("Arvosanasi on : \"Hyvaksytty\"\n");
    }
    else
    {
        printf("Arvosanasi on : \"Hylatty\"\n");
    }


    exit(0);
}

void kertolasku (int * pTulos, int * pLaskuri1) {

    srand((unsigned)time(NULL));

    int syote;
    int luku1, luku2;
    int i = 0;

    luku1=rand() % 10;
    luku2=rand() % 10;

    printf("Anna luku -1 lopettaaksesi\n");
    printf("Paljonko on %d kertaa %d? ", luku1, luku2);

    while(syote != luku1*luku2) {

        scanf("%d", &syote);

        if(syote == luku1*luku2) {
            printf("Oikein!\n\n");
            i++;
        }
        else if (syote != -1) {
            printf("Vaarin, yrita uudelleen > ");
            i++;
        }



        *pTulos = syote;
        *pLaskuri1 = i;

        if(syote == -1)
            lopetus();
    }

}


void jakolasku (int * pTulos, int * pLaskuri1) {

    srand((unsigned)time(NULL));

    int syote = 0;
    int luku1, num1, num2;
    int i = 0;

    num1=rand() % 10;
    num2=rand() % 10;

    while(num1 == 0 || num2 == 0) {
        num1=rand() % 10;
        num2=rand() % 10;
    }

    luku1=num1*num2;

    printf("Anna luku -1 lopettaaksesi\n");
    printf("Paljonko on %d jaettuna %d:lla? ", luku1, num2);

    while(syote != num1) {

        scanf("%d", &syote);

        if(syote == num1) {
            printf("Oikein!\n\n");
            i++;
        }
        else if (syote != -1) {
            printf("Vaarin yrita uudelleen > ");
            i++;
        }

        *pTulos = syote;
        *pLaskuri1 =  i;

        if(syote == -1)
            lopetus();
    }
}
