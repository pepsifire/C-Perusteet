#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * arvoOikeaRivi();
int tarkistaOikeatNumerot(int[], int[]);

int main()
{
    srand(time(NULL)); //rng
    int rivimaara = 0;
    int lottorivi[5][7] = { {0},{0} };
    int i,j;
    int *oikeaRivi;
    int lisaNumerot[2] = {0};
    int osumat;
    int lisaOsumat;
    printf("Montako rivia haluat syottaa (max 5 rivia) > ");
    scanf("%d",&rivimaara);

    for(i = 0; i < rivimaara; i++) {
        for(j = 0; j < 7; j++) {
        int lottoNumero;
        printf("Anna %d rivin %d. numero > ",i+1,j+1);
        scanf("%d",&lottoNumero);
        lottorivi[i][j] = lottoNumero;
        }

    }
    printf("Lottorivit:\n");
    for(i = 0; i < rivimaara; i++) {

        for(j = 0; j < 7; j++) {
            printf("%d ",lottorivi[i][j]);
        }
        printf("\n");
        }
        printf("Oikea rivi: ");
        oikeaRivi = arvoOikeaRivi();
        for(i = 0; i < 7; i++) {
            printf("%d ", oikeaRivi[i]);
        }
        printf("lisänumerot: ");
        for(i = 7; i < 10; i++) {
            printf("%d ", oikeaRivi[i]);
        }
        printf("\n");
        for(i = 0; i < 3; i++) {
                j = 7;
            lisaNumerot[i] = oikeaRivi[j];
            j++;
        }



        for(i = 0; i < rivimaara; i++) {
            osumat = tarkistaOikeatNumerot(lottorivi[i],oikeaRivi);
            lisaOsumat = tarkistaOikeatNumerot(lottorivi[i],lisaNumerot);
        printf("Rivilla %d. on %d oikein ja %d lisanumeroa\n",i+1, osumat,lisaOsumat);

        }


}

// pointteri koska https://www.tutorialspoint.com/cprogramming/c_return_arrays_from_function.htm
int * arvoOikeaRivi() {
    static int lottorivi[9]; // 7+ 3
    int i;
    for (i = 0; i < 10; i++) {
        lottorivi[i] = 1+ rand() % 40; //1-40;
    }

    return lottorivi;
}

int tarkistaOikeatNumerot(int lottorivi[], int oikeaRivi[]) {
    //printf("tarkistetaan...\n");
    int oikein = 0;
    int i,j;
    for (i = 0; i < 7; i++) {
        for(j = 0; j <7; j++) {
                //printf("onko %d sama kuin %d\n",lottorivi[i],oikeaRivi[j]);
            if(lottorivi[i] == oikeaRivi[j]) {
                oikein += 1;
                //printf("i: %d j: %d HIT\n",i+1,j+1);
            }

        }
    }
    return oikein;

}


