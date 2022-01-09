#include <stdio.h>
int main()
{
    int m, n, i, j, k, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter your first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter the %d %d element of first matrix ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter your second matrix\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the %d %d element of second matrix ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Your first matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Your second matrix is \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Matrix Multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
                result[i][j] = sum;
                sum = 0;
            }
        }
    }

    // Displaying matrix
    printf("\nMatrix after multiplication\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}