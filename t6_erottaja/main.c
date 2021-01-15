#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    int i;
    int negatiivinen = 0; //jos eka on negatiivinen niin loputkin on
    char syote[6];


    scanf("%s",syote);
    //printf("syote0 :%c: ", syote[0]);
    if (syote[0] == '-')
    {
        negatiivinen = 1; //negatiivinen p‰‰lle
        i = 1;
    }
    else
    {
        i = 0;
    }

    if(syote[0] == '0' && syote[1] == '0' && syote[2] == '0' && syote[3] == '0')
    {
        printf("Luku %c eroteltuna: ",syote[4]);
    }
    else
    {
        printf("Luku %s eroteltuna: ",syote);
    }


    for (i  = i; i<6; i++)
    {
        if (negatiivinen == 1)
        {
            printf("-%c ",syote[i]);

        }
        else
        {
            printf("%c ",syote[i]);
        }
    }



}
