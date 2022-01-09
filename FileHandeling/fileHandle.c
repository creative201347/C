#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char name[20];
};
int main()
{
    int i, n;
    struct Student class12[20];
    FILE *file_pointer;
    file_pointer = fopen("students.txt", "w+");
    if (file_pointer == NULL)
    {
        printf("Cannot Open file");
        return -1;
    }
    printf("Enter the number of students ");
    scanf("%d", &n);
    printf("Enter the information of students\n");
    for (i = 1; i <= n; i++)
    {
        printf("Enter the id of %d student ", i);
        scanf("%d", &class12[i].id);
        printf("Name of Student ");
        scanf("%s", &class12[i].name);
    }
    printf("*************Student Records***************\n");
    for (i = 1; i <= n; i++)
    {
        printf("Id : %d ", class12[i].id);
        printf("Name : %s\n", class12[i].name);
    }

    if (class12[i].id < 5)
    {
        printf("Students having roll utp to 5\n");
        for (i = 1; i <= n; i++)
        {
            printf("Id : %d ", class12[i].id);
            printf("Name : %s\n", class12[i].name);
        }
    }

    fclose(file_pointer);
    return 0;
}