#include <stdio.h>

int *maximum(int *a, int *b)
{
    if (*a > *b)
        return a;
    else
        return b;
}

int main()
{
    int m = 7, n = 90;
    int *p;
    p = maximum(&m, &n);
    printf("Maximum = %d\n", *p);
    return 0;
}