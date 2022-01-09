#include <stdio.h>
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 4; i++)
    {
        // printing spaces
        for (j = 1; j <= 4 - i; j++)
        {
            printf("  ");
        }
        // Printing in ascending
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%d ", k);
        }
        // descending
        for (l = 2 * i - 2; l >= i; l--)
        {
            printf("%d ", l);
        }
        printf("\n");
    }

    return 0;
}