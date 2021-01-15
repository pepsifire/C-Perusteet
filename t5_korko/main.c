#include <stdio.h>
#include <stdlib.h>

int main()
{
    double lainasumma,
    korko,
    lainapaivat,
    tulos;

    scanf("%lf %lf %lf", &lainasumma, &lainapaivat, &korko);




    tulos = lainasumma * (korko/100) * (lainapaivat/365);

    printf("Lainapaaoman %0.2lf euroa korko %0.0lf päivältä korkoprosentilla %0.2lf on yhteensä %0.2lf euroa.", lainasumma, korko, lainapaivat, tulos);
}
