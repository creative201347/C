#include <stdio.h>
#define N 50
int main()
{
    int i, j, k, m, n, p, q, sum;
    int a[N][N], b[N][N], result[N][N];
    printf("Enter the order of first matrix ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the order of second matrix ");
    scanf("%d%d", &p, &q);
    printf("Enter the elements of second matrix ");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("First matrix is\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    if (n != p)
    {
        printf("Cannot multiply because of invalid order of matrices");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] = sum;
            }
        }
        printf("Matrix Multiplication\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}