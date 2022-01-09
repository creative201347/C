#include <stdio.h>
int main()
{
    int var = 20; /* actual variable declaration */
    int *p;       /* pointer variable declaration */

    p = &var; /* store address of var in pointer variable*/

    printf("Address of var variable: %x\n", &var);

    /* address stored in pointer variable */
    printf("Address stored in p variable: %x\n", p);

    /* access the value using the pointer */
    printf("Value of *p variable: %d\n", *p);
    return 0;
}
/*
    Pointers are special variables that stores addresses of another variable
        rather than its value
    One pointer cannot store two variables addresses at a time
    but two pointers can stora address of one variable

    int num = 45
    int *ptr
    ptr = &num

num = 45
&num = 4000
ptr = 4000
*ptr = 45
&ptr = 6000
&*ptr = 4000
*&num = 45
*/