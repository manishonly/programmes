#include <stdio.h>

void main()
{
    struct fac
    {
        char name[20];
        int salary;
        float students;
        struct man
        {
            char m;
        } m1;
    } f1;
    printf("enter name");
    //scanf("%s %d %f", &f1.name, &f1.salary, &f1.students);
    printf("%s,%d,%f", f1.name, f1.salary, f1.students);
    printf("\nsize is %d and %d", sizeof(f1.m1), sizeof(f1));
}