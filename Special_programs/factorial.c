#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int i, n, fact = 1;
    printf("Enter any number ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("%d! = %d\n", n, fact);
    printf("%d! = %d", n, factorial(n));

    return 0;
}