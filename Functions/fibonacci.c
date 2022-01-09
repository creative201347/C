#include <stdio.h>
int printFibonnaci(int);
int main()
{
    int n;
    printf("Enter the numbers of terms ");
    scanf("%d", &n);
    printFibonnaci(n);
    return 0;
}
int printFibonnaci(int n)
{
    int i, a = 0, b = 1, c;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
}