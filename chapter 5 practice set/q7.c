#include<stdio.h>
// Function to print the pattern
void printPattern(int n) {
    // Outer loop for each line
    for (int i = 1; i <= n; i++) {
        // Inner loop to print '*' for each column in the current line
        for (int j = 1; j <= (2*i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // Call the function to print the pattern
    printPattern(n);

     return 0;
}