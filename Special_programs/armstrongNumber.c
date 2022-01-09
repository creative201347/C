#include <stdio.h>
int main()
{
    int number, q, remainder, count = 0;
    printf("Enter any number ");
    scanf("%d", &number);
    q = number;
    while (q != 0)
    {
        remainder = q % 10;
        count++;
        q = q / 10;
        printf("%d", count);
    }

    return 0;
}
/*
    371 is an 3digit number. Therefore, its order is 3
    3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371
*/