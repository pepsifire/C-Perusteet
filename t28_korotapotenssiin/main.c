#include <stdio.h>
#include <stdlib.h>


int korotaKokonaislukuPotenssiin(int, int);

int main()
{
    int luku1,luku2;
    int tulos;
    scanf("%d %d",&luku1,&luku2);

    tulos = korotaKokonaislukuPotenssiin(luku1,luku2);

    printf("Luku %d korotettuna potenssiin %d on %d",luku1,luku2,tulos);
}

int korotaKokonaislukuPotenssiin(int luku, int potenssi) {

        int tulos = 1;

        while(potenssi != 0) {
            tulos *= luku; // tulos = tulos * luku;
            potenssi--;
        }

        return tulos;

}
