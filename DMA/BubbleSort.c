#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n = 10, temp;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    int arr[50] = {1, 57, 88, 55, 5478, 574, 4874, 7, 85478, 85475, 8888784};
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    free(ptr);

    return 0;
}