#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char str[] = "Programming";
    int n = strlen(str);
    for (i = 0; i <= n / 2; i++)
    {
        for (j = i; j < n - i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}