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
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                num[j] = num[j] + num[j + 1];
                num[j + 1] = num[j] - num[j + 1];
                num[j] = num[j] - num[j + 1];
            }
        }
    }
    printf("The sorted list using bubble sorting is >> \n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d", num[i]);
        printf("\n");
    }
}