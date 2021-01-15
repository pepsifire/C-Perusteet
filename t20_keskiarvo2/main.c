#include <stdio.h>
#include <stdlib.h>

int main()
{
   double syote;
   double keskiarvo;
   double maara = 0;

   for(;;) {
        scanf("%lf",&syote);


        if(syote < 0) {
            break;
        } else {

        keskiarvo += syote;
        maara += 1;

        }
    }

    keskiarvo = keskiarvo / maara;
    printf("%0.2lf",keskiarvo);

}
