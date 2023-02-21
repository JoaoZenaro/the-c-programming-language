#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* Printing fahrenheit-celcius table */

main()
{
    float fahr, cel;

    printf("Temperature Table\n");
    printf("Fahrenheit\tCelcius\n");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        cel = (5.0 / 9.0) * (fahr - 32.0);
        printf("%8.0f\t%6.1f\n", fahr, cel);
    }

    printf("\nReversed\n");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        cel = (5.0 / 9.0) * (fahr - 32.0);
        printf("%8.0f\t%6.1f\n", fahr, cel);
    }
}