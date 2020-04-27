#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number >> ");
    scanf("%d", &n);
    for (size_t i = 2; i < (n - 1); i++)
    {
        if (n % 2 == 0)
        {
            printf("The number %d is not a prime number", n);
            exit(0);
        }
    }
    printf("The number %d a prime number", n);
}