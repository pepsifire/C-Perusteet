#include <stdio.h>
#include <stdlib.h>



int main()
{
    int syote;
    int jaannos;
    int maara = 0;
    int numeroidenmaara_temp;
    int takaperin = 0;
    int alkuperainen;

    scanf("%d",&syote);

    numeroidenmaara_temp = syote;
    alkuperainen = syote;

    while (syote != 0)
    {
        jaannos = syote % 10;
        takaperin = takaperin * 10 + jaannos;
        syote /= 10;
    }
    while (numeroidenmaara_temp != 0) {
        numeroidenmaara_temp /= 10;
        maara++;
    }

    if(alkuperainen == 0) {
        printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");
        return 0;
    }
    if(alkuperainen < 0) {
        printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");
        return 0;
    }
    if(maara != 5) {
        printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");
        return 0;
    }
    if(alkuperainen == takaperin)
    {
        printf("Luku %d on palindromi",alkuperainen);
    }
    else
    {
        printf("Luku %d ei ole palindromi",alkuperainen);
    }


}



