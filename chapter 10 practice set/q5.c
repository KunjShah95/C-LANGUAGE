#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    // Open the file in read mode to retrieve the integer
    FILE *file = fopen("number.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open the file. Make sure 'number.txt' exists.\n");
        return 1;
    }

    // Read the integer from the file
    if (fscanf(file, "%d", &number) != 1) {
        printf("Error: Could not read an integer from the file.\n");
        fclose(file);
        return 1;
    }
    fclose(file);

    printf("Original value in file: %d\n", number);

    // Double the value
    number *= 2;

    // Open the file in write mode to update the value
    file = fopen("number.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open the file for writing.\n");
        return 1;
    }

    // Write the updated value to the file
    fprintf(file, "%d", number);
    fclose(file);

    printf("Updated value written to file: %d\n", number);

    return 0;
}
