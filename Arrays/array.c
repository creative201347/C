#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the size of an array ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements in array ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nThe elements in array are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}

// Collection of elements having same dataType
// They are stored in contigeous memory location
// They are accssed using common name

// Assigning values in array
// array[1] = 67;
//  int array[5] ={5,77,23,78,90};
// int array[] = {5, 77, 23, 78, 90};