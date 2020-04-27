
void main()
{
    int b, z, a[2] = {2, 1};
    b = a[0]++;
    z = a[b++];
    printf("%d,%d", b, a[-1]);
}