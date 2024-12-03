#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10]; 
};

int main() {
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 77;

    struct employee kunj = {100, 71.22, "kunj"};

    // Correct the order of arguments in printf
    printf("%d\n%f\n%s\n", kunj.code, kunj.salary, kunj.name); // Fixed the order here

    return 0;
}