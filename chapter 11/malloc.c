#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        fprintf(stderr, "Please enter a positive number\n");
        return 1;
    }

    // Allocate memory
    ptr = (int*) malloc(n * sizeof(int));

    // Check if malloc was successful
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Assign values
    ptr[0] = 3;
    if (n > 1) {
        ptr[1] = 6; // Only assign if n > 1
    }

    // Print the first element
    printf("%d\n", ptr[0]);

    // Free allocated memory
    free(ptr);

    return 0;
}