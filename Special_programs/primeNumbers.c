#include <stdio.h>
int main()
{
    int i, j, count = 0;
    for (i = 2; i < 200; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 0)
            printf("%d\t", i);
        count = 0;
    }

    return 0;
}