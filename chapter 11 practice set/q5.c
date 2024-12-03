#include <stdio.h>
#include <stdlib.h>

int main() {
    int *table;
    int i;

    // Step 1: Dynamically allocate memory to store the multiplication table of 7 up to 10
    table = (int *)malloc(10 * sizeof(int));
    if (table == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Step 2: Generate and store the multiplication table of 7 up to 10
    for (i = 0; i < 10; i++) {
        table[i] = 7 * (i + 1);
    }

    // Step 3: Display the multiplication table of 7 up to 10
    printf("Multiplication table of 7 up to 10:\n");
    for (i = 0; i < 10; i++) {
        printf("7 x %d = %d\n", i + 1, table[i]);
    }

    // Step 4: Reallocate memory to store the multiplication table of 7 up to 15
    table = (int *)realloc(table, 15 * sizeof(int));
    if (table == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Step 5: Generate and store the multiplication table of 7 for additional values (11 to 15)
    for (i = 10; i < 15; i++) {
        table[i] = 7 * (i + 1);
    }

    // Step 6: Display the multiplication table of 7 up to 15
    printf("\nMultiplication table of 7 up to 15:\n");
    for (i = 0; i < 15; i++) {
        printf("7 x %d = %d\n", i + 1, table[i]);
    }

    // Step 7: Free the allocated memory
    free(table);

    return 0;
}
