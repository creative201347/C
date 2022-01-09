#include <stdio.h>
int swap(int *, int *);
int main()
{
    int m = 10, n = 20;
    printf("The values of m and n before swapping are m = %d  n = %d", m, n);
    swap(&m, &n);
    printf("\nThe values of m and n after swapping are m = %d  n = %d", m, n);
    return 0;
}
int swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}