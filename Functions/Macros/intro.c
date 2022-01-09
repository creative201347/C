#include <stdio.h>
#include <math.h>
#define PI 3.14
#define add(x, y) x + y
int main()
{
    int r, x, y;
    float area;
    printf("Enter the radius of circle ");
    scanf("%d", &r);
    area = PI * pow(r, 2);
    printf("The area of circle is %.2f", area);
    printf("\nAddition of two number is %d", add(3, 10));
    return 0;
}