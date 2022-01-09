#include <stdio.h>
void print_square(int);
void square(int *);
int main()
{
    int n = 5, m = 5;
    print_square(n);
    square(&m);
    printf("\nPassed by value %d", n);
    printf("\nPassed by refrence %d", m);
    return 0;
}
void print_square(int x)
{
    printf("The square is %d", x * x);
    x = 500;
}
void square(int *x)
{
    printf("The square is %d", (*x) * (*x));
    *x = 500;
}

/*
    C programming allows passing a pointer to a function.
    By default in C programming the value of variable is passed in the funtion
    Passed variable is read only, we cant modify its value
        i.e the value of n is copied in x
            but x and n are different varibales So,
                if we modify x it doesnot affect n

    In Pass by refrence address of variable is passed
    Passed variable can be readen as well as modified
        rathaer than its value
        i.e the address of m is copied in x
            so if we modify the value of x its also changes the value of m
*/