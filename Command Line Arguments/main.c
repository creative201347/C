/*
argc (argumnet count):
     number of command line argumnets passed to the program
argv (argumnet vector):
    array of string (char pointers) representoing those argumnets
The program name itself is always passed as the first command line argumnet
The value of argc is always greater than or equal to 0
The first element is argv, (i.e argv[0]) is always the program name itself
The array argv always ends with a NULL pointer. That is argv[argc] is always null
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("%d\n", argc);
    printf("%s ", argv[1]);
    printf("%s !!\n", argv[2]);
    return 0;
}