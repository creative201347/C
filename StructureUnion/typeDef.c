#include <stdio.h>
// Existing datapaType name can be renamed
typedef int i;

struct Person
{
    int age;
    char name[100];
    char gender;
    int salary;
};
void print_person(struct Person p)
{
    printf("Age =%d\n", p.age);
    printf("Name =%s\n", p.name);
    printf("Gender =%s\n", p.gender);
    printf("Salary =%d\n", p.salary);
};
int main()
{
    i a = 20;
    printf("%d", a);

    return 0;
}