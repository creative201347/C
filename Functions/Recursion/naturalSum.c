#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter the value of n ");
    scanf("%d", &n);
    printf("\nThe sum of first %d natural number is %d", n, sum(n));
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

/*
Define the function in terms of itself
    sum(5) = 5+4+3+2+1
    sum(5) = 5 + sum(4)
    sum(n) = n + sum(n-1)

Find am appopriate base condition to end the recursion
    sum(1) = 1
*/