#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char str[] = "Nabin";
    char small_str[] = "nabin";
    int n = strlen(str);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c", str[j]);
            }
            else
            {
                printf("%c", small_str[j]);
            }
        }
        printf("\n");
    }

    return 0;
}