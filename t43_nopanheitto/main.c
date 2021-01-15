#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int heitaNoppaa();

int main()
{
    int tulokset[20] = {0};
    int i;
    int noppa1,noppa2;
    int summa=0;
    int heitot = 35999;
    int yht=0;

    srand(time(NULL)); //rng

    for(i = 0; i<=heitot;i++) {
        noppa1 = heitaNoppaa();
        noppa2 = heitaNoppaa();
        //printf("\nnoppa1: %d, noppa2: %d\n",noppa1,noppa2);

        summa = noppa1+noppa2;
        if(summa > 12) {
            printf("%d\n",noppa1);
            printf("%d\n",noppa2);
            printf("!!!!");
            getchar();
        }

        //printf("\nsumma: %d \n",summa);

        tulokset[summa] += 1;
        //printf("%d\n",tulokset[summa]);
        //printf("\n%d: %d\n",summa,tulokset[summa]);

    }
    printf("Summa  Lukum‰‰r‰\n");
    for(i=2; i<=12;i++) {
        yht += tulokset[i];
    }
    for(i = 2;i <= 12;i++) {
        printf("%d  %d\n",i,tulokset[i]);
    }
    printf("YHTEENSA  %d",yht);
}



int heitaNoppaa() {
    int heitto;
    heitto = 1 + rand() % 6;
    //printf("\nheitto: %d \n",heitto);
    return heitto; //1-6


}
