#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a; // Dereference a to get its value
    *a = *b;       // Assign the value of b to a
    *b = temp;    // Assign the original value of a to b
    printf("After swapping: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Pass the addresses of a and b to the swap function
    swap(&a, &b);

    return 0;
}