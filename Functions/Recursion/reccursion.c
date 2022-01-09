#include <stdio.h>
int fact(int);
int main()
{
    printf("Factorial of 5 is %d", fact(5));
    return 0;
}
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}