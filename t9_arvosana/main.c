#include <stdio.h>
#include <stdlib.h>

int main()
{
    int syote;

    scanf("%d", &syote);

    if ( syote >= 0 && syote <= 11) {
        printf("Hylatty");
    } else
    if ( syote >= 12 && syote <= 13) {
        printf("1");
    } else
    if ( syote >= 14 && syote <= 16) {
        printf("2");
    } else
    if ( syote >= 17 && syote <= 19) {
        printf("3");
    } else
    if ( syote >= 20 && syote <= 22) {
        printf("4");
    } else
    if ( syote >= 23 && syote <= 24) {
        printf("5");
    } else {
    printf("Virheellinen pistemaara");
    }

}
