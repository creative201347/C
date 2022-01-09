#include <stdio.h>
void square(int);
int main()
{
    square(5);
    return 0;
}
void square(int n)
{
    printf("\nSquare of given number is %d", n * n);
}

/* Functions is a block of code that performs some specific task
 To perform that task, a function may take some value from us called parameters
    also may give something back to us after performing that task as return value
 Functions are of two types
 1) Library functions
 2) User-defined functions
    Function Declaration
        return_type function_name( parameter list );
    Function Definition
        Functional parameters
        return_type function_name( parameter list ) {
            body of the function
        }
}
    Function Call
        Functional Arguments


Advantages of user-defined function
i) The program will be easier to understand, maintain and debug.
ii) Reusable codes that can be used in other programs
iii) A large program can be divided into smaller modules.
    Hence, a large project can be divided among many programmers.
 */