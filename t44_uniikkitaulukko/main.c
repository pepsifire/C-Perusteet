#include <stdio.h>
#include <stdlib.h>

void taytaTaulukko(int taulukko[], int koko);

int main()
{
    int uniikki[20];
    int i;
    int koko = sizeof(uniikki)/sizeof(int);
    taytaTaulukko(uniikki,koko);
    for (i = 0; i < 20;i++) {
        printf("%d\n",uniikki[i]);
    }


}

void taytaTaulukko(int taulukko[], int koko) {
    int i;
    for(i = 0; i < koko;i++) {
        taulukko[i] = i+1;
    }



}
