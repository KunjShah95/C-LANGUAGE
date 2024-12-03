#include <stdio.h>

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Perform action only if the number is positive
    if (number > 0) {
        printf("The number %d is positive.\n", number);
    }

    return 0;
}