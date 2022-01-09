#include <stdio.h>
// Defining a structure
struct student
{
    int roll;
    float percent;
    int marks[5];
} santosh = {1, 98};

int main()
{
    struct student nabin;
    struct student apil = {100, 85.70};
    struct student bikal = {};
    nabin.marks[0] = 70;
    nabin.marks[1] = 80;
    nabin.marks[2] = 90;
    nabin.roll = 201347;
    nabin.percent = 75.80;
    printf("nabin roll %d", nabin.roll);
    printf("\napil roll %d", apil.roll);
    printf("\nsantosh roll %d", santosh.roll);
    printf("\npercentage nabin %.2f", nabin.percent);
    printf("\npercentage apil %.2f", apil.percent);
    printf("\npercentage bikal %.2f", bikal.percent);
    printf("\npercentage santosh %.2f", santosh.percent);
    printf("\nNabin marks ", nabin.marks[1]);
    return 0;
}
/*
    Structure is user defined data type in C that allows to combine data  of different dataTypes
    Define Structures
        struct structureName {
            dataType member1;
            dataType member2;
        }
            struct Person {
                char name[50];
                int citNo;
                float salary;
            }
    Access Members of a Structure
        There are two types of operators used for accessing members of a structure.
            Member operator (.)
            Structure pointer operator

*/