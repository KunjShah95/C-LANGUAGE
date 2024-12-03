#include <stdio.h>

int main() {
    char name1[50], name2[50];
    int salary1, salary2;

    // Get input for the first employee
    printf("Enter the name of the first employee: ");
    scanf(" %[^\n]", name1);  // Read string with spaces
    printf("Enter the salary of the first employee: ");
    scanf("%d", &salary1);

    // Get input for the second employee
    printf("Enter the name of the second employee: ");
    scanf(" %[^\n]", name2);  // Read string with spaces
    printf("Enter the salary of the second employee: ");
    scanf("%d", &salary2);

    // Open the file in write mode
    FILE *file = fopen("employees.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to the file
    fprintf(file, "i. %s, %d\n", name1, salary1);
    fprintf(file, "ii. %s, %d\n", name2, salary2);

    // Close the file
    fclose(file);

    printf("Data written to employees.txt successfully.\n");
    return 0;
}
