#include <stdio.h>
int main()
{
    int arr[5] = {45, 65, 15, 32, 1};
    int *p, *q;
    p = &arr[0];
    printf("p = %x\n", p);
    printf("*p = %d\n", *p);
    p = p + 2;
    printf("\n After changing \n");
    printf("p = %x\n", p);
    printf("*p = %d\n", *p);
    p--;
    printf("\n After changing \n");
    printf("p = %x\n", p);
    printf("*p = %d\n", *p);
    return 0;
}

/*      Pointers Arthematic
    Adding an integer to a pointer
        Adding a number N to a pointer leads the pointer to a new location after
             skipping N times size of data type.
        (ptr + i), (ptr + 2)  ptr++
    Subtracting an integer from a pointer
        Subtracting a number N from a pointers is similar to adding a number except in Subtraction the new location will be before
            current location by N times size of data type
             (ptr - i), (ptr - 2)  ptr--
    Subtracting a pointer from another pointer
*/

/*      Pointers Comparision
    Two pointers are equal only if they pointt to the same object in memory
        p < q
        p > q
        p  = =  q
        p ! = q,

*/
