#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arvoNumero();

int main()
{
    int syote;
    int numero;
    char syote2;
    int jatketaan = 1;
    srand(time(NULL));
    numero = arvoNumero();
    //printf("\nnumero on: %d ",numero);

    scanf("%d",&syote);
    while(jatketaan == 1)
    {

        if(syote == numero) {
            printf("OIKEIN!\n");
            printf("Haluatko yrittaa uudelleen (vastaa k, jos haluat jatkaa ja e jos et halua jatkaa pelia)?");
            scanf(" %c",&syote2);

            if(syote2 == 'k') {
                jatketaan = 1;
                syote = -100;
            } else if (syote2 == 'e') {
                jatketaan = 0;
            }
        }
        else if(syote < numero) {
            if(syote != -100) {
                printf("Liian pieni luku, yrita uudelleen.\n");
            }

            scanf("%d",&syote);
        }
        else if(syote > numero) {
            printf("Liian suuri luku, yrita uudelleen.\n");
            scanf("%d",&syote);
        }


    }
}





int arvoNumero()
{
    int numero;
    numero = 1 + rand() % 100; //1-100;

    return numero;

}
