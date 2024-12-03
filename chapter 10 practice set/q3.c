#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return EXIT_FAILURE;
    }

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return EXIT_FAILURE;
    }

    // Read from input file and write to output file twice
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);  // Write character to output file
        fputc(ch, outputFile);  // Write character again to output file

        // Print the character to the console
        printf("%c", ch);  // Print character to console
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("\nContent written to output file successfully.\n");
    return EXIT_SUCCESS;
}