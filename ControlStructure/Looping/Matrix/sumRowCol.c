#include <stdio.h>
int main()
{
    int a[3][3], i, j, row_sum, col_sum;
    printf("Enter the elements of matrix ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The elements of matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The elements of matrix\n");
    for (i = 0; i < 3; i++)
    {
        row_sum = 0;
        col_sum = 0;
        for (j = 0; j < 3; j++)
        {
            row_sum += a[i][j];
            col_sum += a[j][i];
        }
        printf("\nRow sum of %d row is %d", i, row_sum);
        printf("\nColumn sum of %d col is %d", j, col_sum);
    }

    return 0;
}