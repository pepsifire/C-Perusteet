#include <stdio.h>
#include <stdlib.h>

int main()
{
    double syote;
    double keskiarvo = 0.0;
    int maara = 0;

    do {
        scanf("%lf",&syote);


        if(syote < 0) {
            break;
        } else {

        keskiarvo += syote;
        maara += 1;

        }
    } while(1);

    keskiarvo = keskiarvo / maara;
    printf("%0.2lf",keskiarvo);
}
