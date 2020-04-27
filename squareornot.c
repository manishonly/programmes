#include <stdio.h>
#include <math.h>
int distance(x1, y1, x2, y2)
{
    int z;
    z = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    return z;
}
void main()
{
    int num[8];
    printf("Enter the value of coordinates of four points\n");
    scanf("%d %d", &num[0], &num[1]);
    scanf("%d %d", &num[2], &num[3]);
    scanf("%d %d", &num[4], &num[5]);
    scanf("%d %d", &num[6], &num[7]);
    if (distance(num[0], num[1], num[2], num[3]) == distance(num[2], num[3], num[4], num[5]) == distance(num[4], num[5], num[6], num[7]) == distance(num[6], num[7], num[0], num[1]))
        printf("true");
    else
        printf("the coordinates connot form a square\n");
}
