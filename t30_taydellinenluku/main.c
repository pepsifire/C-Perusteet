#include <stdio.h>
#include <stdlib.h>

int onkoLukuTaydellinen( int luku );
#define True 1
#define False 0

int main(void)
{
    int i;

    for(i = 1; i<= 10000; i++) {
        if(onkoLukuTaydellinen(i)) {
            printf("\nLuku %d on taydellinen luku\n", i);
        }
    }





    return(0);
}

int onkoLukuTaydellinen( int luku )
{
    if(luku == 1) {
        return True;
    }

     int summa = 1;
     int i;

    for (i=2; i*i<=luku; i++)
    {
        if (luku%i==0)
        {
            if(i*i!=luku)
                summa = summa + i + luku/i;
            else
                summa=summa+i;
        }
    }

     if (summa == luku && luku != 1)
          return True;

     return False;


}
