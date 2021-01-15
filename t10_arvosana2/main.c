#include <stdio.h>
#include <stdlib.h>

int main()
{
    int syote;
    char arvosana;

    scanf("%d", &syote);

    if ( syote >= 0 && syote <= 11)
    {
        arvosana = 'H';
    }
    else if ( syote >= 12 && syote <= 13)
    {
        arvosana = '1';
    }
    else if ( syote >= 14 && syote <= 16)
    {
        arvosana = '2';
    }
    else if ( syote >= 17 && syote <= 19)
    {
        arvosana = '3';
    }
    else if ( syote >= 20 && syote <= 22)
    {
        arvosana = '4';
    }
    else if ( syote >= 23 && syote <= 24)
    {
        arvosana = '5';
    }
    else
    {
        arvosana = 'E';
    }

    switch (arvosana)
    {
    case 'H':
        printf("Hylätty");
        break;
    case '1':
        printf("1");
        break;
    case '2':
        printf("2");
        break;
    case '3':
        printf("3");
        break;
    case '4':
        printf("4");
        break;
    case '5':
        printf("5");
        break;
    default:
        printf("Virheellinen pistemaara");





    }

}
