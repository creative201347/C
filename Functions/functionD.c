#include <stdio.h>
#include <math.h>
void square(int);
void print_power(int, int);

int main()
{
    int a = 10;
    square(a);  // Pass by refrence
    square(25); // Pass by value
    print_power(20, 2);
    return 0;
}
void square(int n)
{
    printf("\nSquare of given number is %d", n * n);
}
void print_power(int a, int b)
{
    printf("\nPower is %d", pow(a, b));
}

/* Scope of a funtion parameter is within its block
    i.e when we pass an argumnet to an function, it copies its value
        in function definiation. So the values in arguments and function
        definition are different
*/
