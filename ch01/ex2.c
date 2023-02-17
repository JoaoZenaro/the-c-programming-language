#include <stdio.h>

/* Printing fahrenheit-celcius table */

main()
{
    int fahr, cel;

    for (fahr = 0; fahr < 300; fahr += 20)
    {
        cel = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, cel);
    }
}