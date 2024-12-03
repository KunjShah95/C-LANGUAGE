#include <stdio.h>

void add(int a, int b, int *result) {
    *result = a + b;  // Modify the value at the address stored in result
}

int main() {
    int result;
    add(5, 3, &result);  // Pass the address of result to the add function
    printf("Sum is: %d\n", result);  // Prints: Sum is: 8
    return 0;
}
