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
    int x = 10, y = 20;
    int *p;
    p = maximum(&x, &y);
    printf("Maximum = %d", *p);
    return 0;
}