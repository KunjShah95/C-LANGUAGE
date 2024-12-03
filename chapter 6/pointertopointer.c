#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;       // Pointer to num
    int **ptr2 = &ptr;     // Pointer to pointer ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    printf("Value at ptr (value of num): %d\n", *ptr);
    printf("Address stored in ptr (address of num): %p\n", ptr);

    printf("Value at ptr2 (address of ptr): %p\n", *ptr2);
    printf("Value at address stored in ptr2 (value of num): %d\n", **ptr2);

    return 0;
}
