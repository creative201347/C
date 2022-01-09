#include <stdio.h>
int main()
{
    FILE *file_pointer;
    file_pointer = fopen("intro.txt", "r");
    if (file_pointer == NULL)
    {
        printf("Cannot open the file");
        return -1;
    }
    printf("Opened the file successfully");
    fclose(file_pointer);
    return 0;
}
/*
    The fopen() function is used to create a new file or open an
        existing file in C. The fopen function is defined in the
            stdio.h header file.
    file = fopen(“file_name”, “mode”)
    The fclose() function is used to close a file.
        The file must be closed after performing all the operations on it.
    The syntax of fclose() function is given below:
*/
/*
r read mode
    Used for reading an existing file
    If the file doesnot exists, NULL is returned
w write mode
    Used for writing to a file
    if the file exists it will be truncated(remove all the contains there)
    if the file doenot exist, it will be created
a append mode
    Used for appending content to a file
    the existing content is not truncated, writing starts from the end of file
    if the file doesnot exits, it will be created
*/
/*
r+ read plus
    Used for read from as well as write to a file
    wriitng starts from the begining of the file
    if file exists, content will not be truncated
        instead content will be overridden
    if the file doenot exists NULL will be returned
w+ write plus
    Used to red from as well as write to a fil
    if file exits it will be truncated
    if file doesnot exits it will be created
a+ append plus
    Used to read from as well as appeand content to a file
    if the file doenot exists it wont be truncated,
        writing starts from end of file
    if the file doesnot exits it will be created
*/
/*
Binary files
rb
wb
ab
r+b
w+b
a+b
*/