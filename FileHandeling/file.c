#include <stdio.h>
#include <string.h>
struct dateofbirth
{
    int day, month, year;
};
struct student
{
    char name[20], address[20];
    int roll;
    struct dateofbirth dob;
};
int main()
{
    struct student s[100];
    int i, n;
    FILE *fp;
    fp = fopen("student.txt", "a+");
    if (fp == NULL)
    {
        printf("file could not open");
        return -1;
    }
    printf("enter number of student");
    scanf("%d", &n);
    printf("enter student information");
    for (i = 0; i < n; i++)
    {
        printf("enter name");
        gets(s[i].name);
        printf("enter addresss");
        gets(s[i].address);
        printf("enter roll");
        scanf("%d", &s[i].roll);
        printf("enter date of birth");
        scanf("%d%d%d", &s[i].dob.year, &s[i].dob.month, &s[i].dob.day);
        fwrite(&s, sizeof(s), 1, fp);
    }
    rewind(fp);
    printf("students information are ");
    for (i = 0; i < n; i++)
    {
        fread(&s, sizeof(s), 1, fp);
        printf("name=%c\naddress=%c\nroll=%d\ndate of birth=%d-%d-%d", s[i].name, s[i].address, s[i].roll, s[i].dob.year, s[i].dob.month, s[i].dob.day);
    }
    fclose(fp);
}