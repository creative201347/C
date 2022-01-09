#include <stdio.h>
void maximum(int[], int, int *, int *);
int main()
{
    int arr[] = {1, 2, 5, 4, 7, 8, 5, 6};
    int max, min;
    maximum(arr, (int)sizeof(arr) / sizeof(arr[0]), &max, &min);
    printf("Maximum = %d\nMinimum = %d", max, min);
    return 0;
}
void maximum(int arr[], int n, int *max, int *min)
{
    int i;
    *max = arr[0];
    *min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}