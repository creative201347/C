#include <stdio.h>
int isPrime(int);
int printPrime(int);
int main()
{
    int num;
    printf("Enter any number ");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("\nThe given number is prime number");
    }
    else
    {
        printf("\nThe given number is not prime number");
    }
    printPrime(num);
    return 0;
}

int isPrime(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int printPrime(int n)
{
    int i;
    printf("\nThe prime numbers are ");
    for (i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            printf("%d\t", i);
        }
    }
}