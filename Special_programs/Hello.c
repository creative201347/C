#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter your name ");
    gets(name);
    printf("Good Morning, ");
    puts(name);
    return 0;
}
