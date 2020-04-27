#include <stdio.h>
void main()
{
    int n, *num, i, j;
    printf("Enter the range of numbers >> ");
    scanf("%d", &n);
    num = (int *)(malloc(n * sizeof(num)));
    printf("Enter the numbers\n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (num[i] > num[j])
            {
                num[i] = num[i] + num[j];
                num[j] = num[i] - num[j];
                num[i] = num[i] - num[j];
            }
        }
    }
    printf("The sorted list after selection sorting is >> \n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
}
