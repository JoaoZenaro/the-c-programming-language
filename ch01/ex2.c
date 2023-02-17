#include <stdio.h>

/* Printing fahrenheit-celcius table */

main()
{
    float fahr, cel;

    printf("Temperature Table\n");
    printf("Fahrenheit\tCelcius\n");

    for (fahr = 0; fahr < 300; fahr += 20)
    {
        cel = (5.0 / 9.0) * (fahr - 32.0);
        printf("%8.0f\t%6.1f\n", fahr, cel);
    }
}