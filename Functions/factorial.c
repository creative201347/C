#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter any number ");
    scanf("%d", &num);
    printf("%d! = %d", num, factorial(num));
    return 0;
}
int factorial(int n)
{
    int i, result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}