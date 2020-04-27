#include <stdio.h>
void main()
{
    int n, *num;
    printf("Enter the range of numbers >> ");
    scanf("%d", &n);
    num = (int *)(malloc(n * sizeof(num)));
    printf("Enter the numbers\n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            if (num[i] < num[j])
            {
                num[i] = num[i] + num[j];
                num[j] = num[i] - num[j];
                num[i] = num[i] - num[j];
            }
        }
    }
    printf("The sorted list after the insertion sort is >>\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d", num[i]);
        printf("\n");
    }
}