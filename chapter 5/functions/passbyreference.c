#include <stdio.h>

void modifyValue(int* num) {
    *num = 20; // This change will affect the original variable
}

int main() {
    int a = 10;
    printf("Before modifyValue: a = %d\n", a);
    modifyValue(&a); // Pass the address of a
    printf("After modifyValue: a = %d\n", a); // a is now 20
    return 0;
}