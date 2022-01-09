#include <stdio.h>
int main()
{
    int number, q, remainder, result = 0;
    printf("Enter any number ");
    scanf("%d", &number);
    q = number;
    while (q != 0)
    {
        remainder = q % 10;
        result = result * 10 + remainder;
        q = q / 10;
    }
    printf("Hence your reversed nuber is %d", result);
    if (result == number)
        printf("\nIts a palindrome Number");
    else
        printf("\nIts not a palindrome number");

    return 0;
}
/* Reverse a number
result = 0
number = 456
q = quotient
    remainder = number % 10
    result = result * 10 + remainder
    q = q/10
*/
