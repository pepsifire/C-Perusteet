#include <stdio.h>
#include <stdlib.h>

int doSomething(int *arr, int size);

int main()
{
    int taulukko[] = {1,-1,6,7,3,9};
    int tulos;

    tulos = doSomething(taulukko,5);

    printf("tulos: %d",tulos);

}


int doSomething( int * arr , int size ){

    int i= size-1;
    int x = arr[i];

    for( i=size-1; i >= 0; i--)
        if( arr[i] < x )
            x = arr[i];

    return x;
}
