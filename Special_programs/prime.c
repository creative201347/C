#include <stdio.h>
int main()
{
    int i, count = 0, n;
    printf("Enter any number ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        printf("Prime Number");
    else
        printf("Composite Number");

    return 0;
}