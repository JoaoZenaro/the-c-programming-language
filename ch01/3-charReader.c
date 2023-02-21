#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
        c = getchar();
    }

    // printf("\n\n%d", EOF);
}