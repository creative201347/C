#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[] = "Nabin";
    char last_name[] = "Dhami";
    printf("%d", strlen(first_name));
    printf("\n%d", strcmp(first_name, last_name));
    // printf("\n%s", strcat(first_name, last_name));
    // printf("\n%s", strrev(first_name));
    // printf("\n%s", strlwr(first_name));
    // printf("\n%s", strupr(first_name));

    return 0;
}

// c language doneesnot support strings as a datataype
// String is array of characters terminated by a null character ('/0')
// char name[] = "Nabin";
// char name[] = {'n','a','b',i','n','/0'}