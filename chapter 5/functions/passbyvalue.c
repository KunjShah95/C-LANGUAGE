#include <stdio.h>

void modifyValue(int num) {
    num = 20; // This change will not affect the original variable
}

int main() {
    int a = 10;
    printf("Before modifyValue: a = %d\n", a);
    modifyValue(a);
    printf("After modifyValue: a = %d\n", a); // a remains 10
    return 0;
}