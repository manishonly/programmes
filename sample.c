#include <stdio.h>
void main()
{
    int n;
    n = f(6);
    printf("%d", n);
}
int f(int x)
{
    if (x == 2)
        return 2;
    else
    {
        printf("+");
        f(x - 1);
    }
}