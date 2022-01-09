#include<stdio.h>
int main()
{
    printf("Dynamic memory allocation");
    return 0;
}
/*
    Dynamic memory allocation is the manual process of programmatically
        allocating, resizing and deallocatinf of memory block while the
            progam is running i.e runtine
    1) Allocate a memory block
    2) Deallocate an existing memory block
    3) Resize an existing memory block without modifying its content
*/

/*
As you know, an array is a collection of a fixed number of values. 
    Once the size of an array is declared, you cannot change it.
Sometimes the size of the array you declared may be insufficient. To solve this issue, you can allocate memory manually during run-time.
    This is known as dynamic memory allocation in C programming.
To allocate memory dynamically, library functions malloc(), calloc(), realloc() and free() are used.
    These functions are defined in the <stdlib.h> header file.
*/

/*
    malloc()
        "malloc" stands for memory allocation.
        The malloc() function reserves a block of memory 
            of the specified number of bytes.
        And, it returns a void pointer holding addess of newly
            allocated memory space if allocation was successds
                otherwise, NULL is returned.

    ptr = (castType*) malloc(size);
    ptr = (int*) malloc(100 * sizeof(int));
*/
/* calloc
    "malloc" stands for “contiguous allocation”.
    The calloc() function reserves a block of memory 
        of the specified number of bytes. 
    It is similar to malloc() 
        but has two different points and these are:
        It initializes each block with a default value ‘0’.
        It has two parameters or arguments as compare to malloc().
    ptr = (cast-type*)calloc(n, element-size);
    ptr = (float*) calloc(25, sizeof(float));
*/
/* realloc()
    “realloc” or “re-allocation” method in C is used to 
        dynamically change the memory allocation of a previously 
            allocated memory
        ptr = realloc(ptr, newSize);
    where ptr is reallocated with new size 'newSize
*/
/* free()
    free” used to dynamically de-allocate the memory. 
    The memory allocated using functions malloc() and calloc() is 
        not de-allocated on their own. 
    Hence the free() method is used, whenever the dynamic memory 
        allocation takes place. 
    It helps to reduce wastage of memory by freeing it.
    free(ptr);
*/