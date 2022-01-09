#include <stdio.h>
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int i, a = 0, b = 1, c = 0, n = 10;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nFibonnaci by recursion\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", fib(i));
    }

    return 0;
}