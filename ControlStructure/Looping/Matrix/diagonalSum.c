#include <stdio.h>
#define N 50
int main()
{
    int i, j, m, n;
    int a[N][N], diagonal_sum = 0, diagonal_sum1 = 0;
    printf("Enter the rows and column of matrix ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of matrix ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonal_sum += a[i][j];
            }
            if (i + j == n - 1)
            {
                diagonal_sum1 += a[i][j];
            }
        }
    }
    printf("Diagonal sum are %d and %d", diagonal_sum, diagonal_sum1);

    return 0;
}