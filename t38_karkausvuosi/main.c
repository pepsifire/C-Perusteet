#include <stdio.h>
#include <stdlib.h>

int onkoKarkausvuosi(int);

int main()
{
    int syote;


    printf("Syötä vuosi: ");
    scanf("%d",&syote);
    if(onkoKarkausvuosi(syote) == 0)
    {
        printf("Vuosi %d on karkausvuosi",syote);
    }
    else
    {
        printf("Vuosi %d ei ole karkausvuosi",syote);
    }
}


int onkoKarkausvuosi(int vuosi)
{
    if (vuosi % 400 == 0) { // jos jaollinen 400 niin karkausvuosi
        return 0;
    }
    else if (vuosi % 100 == 0) { //jos jaollinen 100 muttei 400  niin ei karkausvuosi
        return -1;
    }
    else if (vuosi % 4 == 0) { //jos jaollinen 4 niin karkausvuosi
        return 0;
    }
        return -1; //loput ei ole
    }




