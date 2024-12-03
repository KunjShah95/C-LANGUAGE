#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements = 5;
    
    // Allocate memory for an array of integers
    int *array = (int *)malloc(num_elements * sizeof(int));
    
    // Check if the memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error code
    }

    // Initialize the array
    for (int i = 0; i < num_elements; i++) {
        array[i] = i + 1; // Fill with values 1, 2, 3, 4, 5
    }

    // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < num_elements; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Resize the array to hold 10 integers
    num_elements = 10;
    array = (int *)realloc(array, num_elements * sizeof(int));
    
    // Check if the reallocation was successful
    if (array == NULL) {
        printf("Reallocation failed!\n");
        return 1; // Exit with error code
    }

    // Initialize the new elements
    for (int i = 5; i < num_elements; i++) {
        array[i] = i + 1; // Fill with values 6, 7, 8, 9, 10
    }

    // Print the resized array
    printf("Resized array:\n");
    for (int i = 0; i < num_elements; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Free the allocated memory
    free(array);
    
    return 0; // Exit successfully
}