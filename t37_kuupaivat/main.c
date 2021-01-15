#include <stdio.h>
#include <stdlib.h>

int paivienLukumaaraKuukaudessa(int kk);

int main()
{
    int syote;
    int paivat;

    printf("Syötä Kuukausi: ");
    scanf("%d",&syote);

    paivat = paivienLukumaaraKuukaudessa(syote);

    if (paivat == -1) {
        printf("Kuukautta %d ei ole olemassa",syote);
    } else {
        printf("Kuukaudessa %d on %d paivaa",syote,paivat);
    }




}



int paivienLukumaaraKuukaudessa(int kk) {
    int paivat[] = { 31,28,31,30,31,30,31,31,30,31,30,31};

        if(kk <= 0 || kk > 12) {
            return -1;
        } else {
            return paivat[kk-1];
        }




}
