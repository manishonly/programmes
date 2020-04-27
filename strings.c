#include <stdio.h>
void main()
{
    union info {
        char name[200];
        int roll;
        int age;
    };
    union info student1;
    printf("Enter the name of the student >> ");
    scanf("%s", student1.name);
    printf("Enter the rollnumber of the student >>");
    scanf("%d", &student1.roll);
    printf("Enter the age of the student>>");
    scanf("%d", &student1.age);
    printf("\nThe name of the student is %s\nThe rollnumber is %d\nThe age is %d", student1.name, student1.roll, student1.age);
}
