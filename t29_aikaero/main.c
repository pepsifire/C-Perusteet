#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int aikaSekunneiksi(int,int,int);



int main()
{
    int t,m,s,t1,m1,s1;
    int tulos1,tulos2;
    int aikaero;

    scanf("%d %d %d",&t,&m,&s);
    tulos1 = aikaSekunneiksi(t,m,s);

    scanf("%d %d %d",&t,&m,&s);
    tulos2 = aikaSekunneiksi(t,m,s);

    aikaero = abs(tulos1-tulos2); //itseisarvo

        t1 = (aikaero/3600);
        m1 = (aikaero-(3600*t1))/60;
        s1 = (aikaero-(3600*t1)-(m1*60));




    printf("Aikaero on: %d sekuntia\n",aikaero);

    printf("Aika on %d tuntia %d minuuttia %d sekuntia\n",t1,m1,s1);
}




int aikaSekunneiksi(int tunti, int minuutti, int sekunti) {

    int tulos = 0;
    int i;

    for(i = tunti; i > 0;i--) {

        tulos += 3600;

    }
    for(i = minuutti; i > 0;i--) {

        tulos += 60;

    }

    tulos += sekunti;


    return tulos;

}


