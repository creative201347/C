#include <stdio.h>
int main()
{
    int a[100][100], i, j, m, n;
    printf("Enter the order of matrix ");
    scanf("%d%d", &m, &n);
    printf("\nEnter the elements fo array ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe elements of array are\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}