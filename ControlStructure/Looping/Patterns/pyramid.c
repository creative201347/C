#include <stdio.h>
int main()
{
    int i, star, space;
    for (i = 0; i <= 4; i++)
    {
        // for printing spaces
        for (space = 1; space <= 4 - i; space++)
        {
            printf(" ");
        }
        for (star = 1; star <= 2 * i - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}