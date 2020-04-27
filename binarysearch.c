#include <stdio.h>
void main()
{
    int f, l, b, m, *num, s;
    printf("Enter the range of numbers >> ");
    scanf("%d", &b);
    num = (int *)malloc(b * sizeof(num));
    printf("Enter the numbers in assending order \n");
    for (size_t i = 0; i < b; i++)
    {
        scanf("%d", num + i);
    }
    printf("Enter the number to be searched >> ");
    scanf("%d", &s);
    f = 0, l = b, m = (f + l) / 2;
    for (size_t i = 0; i < b; i++)
    {
        if (num[m] > s)
        {
            l = m;
            m = (l + f) / 2;
        }
        if (num[m] < s)
        {
            f = m;
            m = (l + f) / 2;
        }
        if (num[m] == s)
        {
            printf("The element %d is found at %d position", s, m + 1);
            exit(0);
        }
    }
    printf("The element is not found 😭");
}