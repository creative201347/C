#include <stdio.h>
int square(int x)
{
    return x * x;
}
int main()
{
    int squareResult = square(50);
    printf("Square %d", squareResult);
    return 0;
}

/* Returning value from a function
    only one value can be returned and function dont executes
        after return value

Function that take no parameter and doesnot return anything
Functions that take parameters but doesnot return anything
Functions that take no parameter but still return value
Functions that takes parameters as well as returns value
*/