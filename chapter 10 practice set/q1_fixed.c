#include <stdio.h>

int main() {
    FILE *fptr;
    int num1, num2, num3;

    fptr = fopen("file.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit if the file cannot be opened
    }

    fscanf(fptr, "%d %d %d", &num1, &num2, &num3); // Use & to get the address of the variables
    printf("The values are %d %d %d\n", num1, num2, num3);
    
    fclose(fptr);
    return 0;
}
