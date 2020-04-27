#include <stdio.h>
void main()
{
    int *num, n, m;
    printf("Enter the range of numbers >> ");
    scanf("%d", &n);
    num = (int *)malloc(n * sizeof(num));
    printf("Enter the numbers\n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", num + i);
    }
    printf("Enter the number to be searched >> ");
    scanf("%d", &m);
    for (size_t i = 0; i < n; i++)
    {
        if (num[i] == m)
        {
            printf("The element is found at %d position", i + 1);
            free(num);
            exit(0);
        }
    }
    printf("The element is not found");
    free(num);
}
