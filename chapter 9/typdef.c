#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    char name[20];
    int age;
} Emp;

int main()
{
    Emp e1, e2;
    e1.id = 1;
    strcpy(e1.name, "Rahul");
    e1.age = 25;
    e2.id = 2;
    strcpy(e2.name, "Rohan");
    e2.age = 26;

    printf("Employee 1: %d, %s, %d\n", e1.id, e1.name, e1.age);
    printf("Employee 2: %d, %s, %d\n", e2.id, e2.name, e2.age);

    return 0;
}