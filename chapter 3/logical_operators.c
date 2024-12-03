#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int result;

    // Logical AND
    result = (a < 10) && (b > 5);
    printf("Logical AND (a < 10 && b > 5): %d\n", result);

    // Logical OR
    result = (a > 10) || (b > 5);
    printf("Logical OR (a > 10 || b > 5): %d\n", result);

    // Logical NOT
    result = !(a > 10);
    printf("Logical NOT (!(a > 10)): %d\n", result);

    return 0;
}
