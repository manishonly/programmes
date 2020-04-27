#include <stdio.h>
void main()
{
    int num[20], n, g, s;
    printf("Enter the range of numbers > ");
    scanf("%d", &n);
    printf("Enter the Numbers\n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    g = num[0];
    s = num[0];
    for (size_t i = 0; i < n; i++)
    {
        if (num[i] > g)
        {
            g = num[i];
        }
        if (num[i] < s)
        {
            s = num[i];
        }
    }
    printf("The greatest number is %d\nThe smallest number is %d", g, s);
}