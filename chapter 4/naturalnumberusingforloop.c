#include <stdio.h>

int main() {
    int n;

    // Asking the user for the input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using for loop to print the first n natural numbers
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);  // Printing the current value of i
    }

    return 0;
}
