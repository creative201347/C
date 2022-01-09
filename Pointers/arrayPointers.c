#include <stdio.h>
int main()
{
    int num[] = {5, 6, 7, 8, 9};
    printf("nums =%p\n", num);
    printf("&nums[0] = %p\n", &num);
    return 0;
}
/*
    pointer stores the address of its 1st element of an array
*/