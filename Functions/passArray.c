#include <stdio.h>
int largest(int[], int);
int main()
{
    int a[] = {4, 5, 6, 78, 876, 45, 1231}, n = 7, maximum;
    maximum = largest(a, n);
    printf("Maximum %d", maximum);
    return 0;
}
int largest(int array[], int n)
{
    int i;
    int max = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}