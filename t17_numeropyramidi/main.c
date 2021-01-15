#include <stdio.h>

int main (void)
{
    int rivit, valit, valienmaara = 9, i, luku = 1, alkuluku = 1, luku2, alkuluku2 = 2, l;

    for (rivit = 1; rivit <= 10; rivit++)
    {
        for (valit = 0; valit < valienmaara; valit++)
        {
            printf (" ");
        }
        if (rivit > 0)
        {

            luku = alkuluku;

            for (i = 1; i < rivit + 1; i++)
            {
                printf ("%d", luku);
                luku++;
                if (luku == 10)
                {
                    luku = 0;
                }
            }
            alkuluku++;
            if (alkuluku == 10)
                alkuluku = 0;
        }

        if (rivit > 1)
        {
            luku2 = alkuluku2;

            for (l = 1; l < rivit; l++)
            {
                printf ("%d", luku2);
                luku2--;
                if (luku2 < 0)
                {
                    luku2 = 9;
                }
            }
            alkuluku2 = alkuluku2 + 2;
            if (alkuluku2 == 10)
            {
                alkuluku2 = 0;
            }
        }
        valienmaara = valienmaara - 1;
        printf ("\n");
    }
    return 0;
}
