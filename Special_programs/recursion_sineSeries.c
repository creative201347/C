#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, fact = 1, sign = -1;
    float sum, x;
    printf("Enter the number of terms ");
    scanf("%d", &n);
    printf("Enter the angle in degree ");
    scanf("%f", &x);
    x = x * 3.14 / 180;
    sum = x;
    printf("Angle in Radian %.2f", x);

    // sin x= x −  x^3/3!  +    x^5/5!−x^7/7!   + . . . . . . .  x^n/n!
    for (i = 3; i <= n; i += 2)
    {
        fact = fact * i * (i - 1);
        sum = sum + sign * pow(x, i) / fact;
        sign = sign * -1;
    }
    printf("Sum of series is %.2f", sum);
    return 0;
}