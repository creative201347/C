#include <stdio.h>
struct Date
{
    int year;
    int month;
    int day;
};
struct Person
{
    int age;
    char name[100];
    struct Date dob;
};
int main()
{
    struct Person Nabin;
    Nabin.dob.year = 2001;
    Nabin.dob.month = 4;
    Nabin.dob.day = 11;
    printf("%d %d %d", Nabin.dob.year, Nabin.dob.month, Nabin.dob.day);
    return 0;
}