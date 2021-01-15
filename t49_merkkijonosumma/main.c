#include <stdio.h>
#include <stdlib.h>

int main()
{
    char eka_luku[256] = "aaa";
    char toka_luku[256] = "aaa";
    int loppuluku = 0;
    int eka;
    int toka;
    char *loput = NULL;

    printf("Anna 1. luku > ");
    fgets(eka_luku, 256, stdin);

    printf("Anna 2. luku > ");
    fgets(toka_luku, 256, stdin);
    eka = strtol(eka_luku, &loput, 10);
    toka = strtol(toka_luku, &loput, 10);


    loppuluku = eka + toka;

    printf("Lukujen %d ja %d summa on %d",eka,toka,loppuluku);

    return 0;
}
