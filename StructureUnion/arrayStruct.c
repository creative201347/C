#include <stdio.h>
#include <string.h>
struct Person
{
    char name[15];
    int age;
    int salary;
};
int main()
{
    int i;
    struct Person persons[3];
    for (i = 1; i <= 2; i++)
    {
        printf("Enter the name, age and salary of number %d person ", i);
        scanf("%s", &persons[i].name);
        scanf("%d", &persons[i].age);
        scanf("%d", &persons[i].salary);
    }
    printf("Records of Persons\n");
    for (i = 1; i <= 2; i++)
    {
        printf("Name: %s\t", persons[i].name);
        printf("Age: %d\t", persons[i].age);
        printf("Salary: %d\n", persons[i].salary);
    }

    return 1;
}