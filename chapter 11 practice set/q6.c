#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // Step 1: Dynamically allocate memory for 5 integers using calloc
    arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Step 2: Input values for the first 5 integers
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 3: Display the first 5 integers
    printf("\nThe first 5 integers are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 4: Reallocate memory to hold 10 integers using realloc
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Initialize the new memory to 0 (calloc-like behavior for newly allocated part)
    for (i = 5; i < 10; i++) {
        arr[i] = 0;  // Explicit initialization
    }

    // Step 5: Input values for the next 5 integers
    printf("\nEnter 5 more integers:\n");
    for (i = 5; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 6: Display all 10 integers
    printf("\nThe 10 integers are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Step 7: Free the allocated memory
    free(arr);

    return 0;
}
