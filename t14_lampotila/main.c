#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius,fahrenheit;

    printf("Celsius  Fahrenheit\n");

    celsius = -100;
    fahrenheit = 1.8*celsius+32;
    printf(" %0.0lf     %0.2lf\n",celsius, fahrenheit);
    celsius += 10;
    while( celsius <= 100 )
    {
        fahrenheit = 1.8*celsius+32;

        if (celsius >= -100 && celsius <=-80)
        {
            printf("  %0.0lf     %0.2lf\n",celsius,fahrenheit);
        }
        if (celsius >= -70 && celsius <=-30)
        {
            printf("  %0.0lf      %0.2lf\n",celsius,fahrenheit);
        }

        if (celsius == -20)
        {
            printf("  %0.0lf       %0.2lf\n",celsius,fahrenheit);
        }

        if (celsius >= -10 && celsius <=-9)
        {
            printf("  %0.0lf       %0.2lf\n",celsius,fahrenheit);
        }
        if(celsius == 0)
        {

            printf("    %0.0lf       %0.2lf\n",celsius,fahrenheit);

        }
        if (celsius >= 10 && celsius <=30)
        {
            printf("   %0.0lf       %0.2lf\n",celsius,fahrenheit);
        }

        if (celsius >= 40 && celsius <=90)
        {
            printf("   %0.0lf      %0.2lf\n",celsius,fahrenheit);
        }
        if (celsius == 100)
        {
            printf("  %0.0lf      %0.2lf\n",celsius,fahrenheit);
        }

        celsius += 10;
    }
}
