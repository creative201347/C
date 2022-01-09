#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int roll;
    char name[50];
    int marks[5];
};
int main()
{
    FILE *file_pointer;
    file_pointer = fopen("student.dat", "a");
    if (file_pointer == NULL)
    {
        printf("File cannot be opened ");
        exit(1);
    }

    struct Student students[3];
    for (int i = 1; i <= 3; i++)
    {
        printf("Entering the data for student %d\n", i);
        printf("Enter the roll number: ");
        scanf("%d", &students[i].roll);
        printf("Name of student: ");
        scanf("%s", &students[i].name);
        printf("Enter the marks for five subjects: ");
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &students[i].marks[j]);
        }
    }

    fwrite(
        students,
        sizeof(struct Student),
        3,
        file_pointer);
    fread(
        students, sizeof(struct Student),
        3,
        file_pointer);

    for (int i = 0; i < 3; i++)
    {
        printf("%d %sW", students[i].roll, students[i].name);
    }

    fclose(file_pointer);
    return 0;
}
