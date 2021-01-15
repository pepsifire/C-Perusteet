#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main()
{
    char syote[100];
    int i = 0;
    fgets(syote, 100, stdin);
    char temp;
    while (syote[i])
    {

        temp = syote[i];

        putchar(tolower(temp));

        i++;

    }
    printf("\n");
    i = 0;

    while(syote[i])
    {

        temp = syote[i];

        putchar(toupper(temp));

        i++;
    }

}

