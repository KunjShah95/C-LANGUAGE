/**Write a program to change the value of a variable to ten times of its current
value.Try using call by value and verify that it does not change the value of
the said variable**/ 

#include <stdio.h>

// Function that tries to change the value of the variable
void changeValue(int num) {
    num = num * 10; // Attempt to change the value to ten times its current value
    printf("Inside function, changed value: %d\n", num); // Display modified value
}

int main() {
    int originalValue = 5; // Initialize a variable
    printf("Original value before function call: %d\n", originalValue);

    // Call the function with the variable
    changeValue(originalValue);

    // Check the value after the function call
    printf("Original value after function call: %d\n", originalValue);

    return 0;
}