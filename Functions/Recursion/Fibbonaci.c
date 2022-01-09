#include <stdio.h>
int fibonnaci(int);
int main()
{
    int i, num;
    printf("Enter the number of terms ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d\t", fibonnaci(i));
    }
    return 0;
}
int fibonnaci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonnaci(n - 1) + fibonnaci(n - 2);
}

/*
0 1 1 2 3 5 ....
    f(n) = f(n-1) + (n-2)
    f(1) = 0
    f(2) =1
*/