#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, reversedN = 0, remainder, originalN;

    scanf("%d",&n);

    originalN = n;



    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }


    printf("Luku %d kaannettyna on %d",originalN,reversedN);


}
