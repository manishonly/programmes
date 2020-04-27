#include <stdio.h>
#include <math.h>
void main()
{
    int b, a, c, r1, r2, d;
    printf("Enter the coefficent of x square > ");
    scanf("%d", &a);
    printf("Enter the coefficent of x > ");
    scanf("%d", &b);
    printf("Enter the constant value > ");
    scanf("%d", &c);
    d = (b * b) - (4 * a * c);
    if (d >= 0)
    {
        r1 = ((-b + sqrt(d)) / (2 * a));
        r2 = ((-b - sqrt(d)) / (2 * a));
        printf("Roots of quadratic equation are %d and %d", r1, r2);
    }
    else
    {
        r1 = (-b) / (2 * a);
        r2 = sqrt(-d) / (2 * a);
        printf("The roots are (%d+i%d) and (%d-i%d) ", r1, r2, r1, r2);
    }
}