#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements = 5;
    
    // Allocate memory for an array of integers
    int *array = (int *)calloc(num_elements, sizeof(int));
    
    // Check if the memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error code
    }
    
    // Print the initialized values
    printf("Array values after calloc:\n");
    for (int i = 0; i < num_elements; i++) {
        printf("array[%d] = %d\n", i, array[i]); // Should print 0 for all elements
    }
    
    // Free the allocated memory
    free(array);
    
    return 0; // Exit successfully
}