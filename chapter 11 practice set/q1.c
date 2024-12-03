#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // Dynamically allocate memory for an array of 6 integers
    arr = (int *)malloc(6 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter 6 integers:\n");
    for (i = 0; i < 6; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the elements of the array
    printf("\nThe elements in the array are:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
