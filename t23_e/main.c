#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define M_E 2.71828182845904523536

int tekija (int i)
{
    if (i==0)
        return 1;
    else
        return i*tekija(i-1);
}

int main(void)
{
    int n = 10;
    double e = 1;
    double ep = 1;
    int i = 1;

    printf("%lf\n",e);

    while(1)
    {
        e += 1.0/tekija(i++);
        printf("%lf\n",e);

        if(i >= n && (fabs(e - M_E) < ep)) //jos i >= n ja e- e kokonaisluku on pienempi ku yks
            break;
    }



    return 0;
}
