#include <stdio.h>

// Function to calculate sum and average
void calculateSumAndAverage(int num1, int num2, int *sum, float *average) {
    *sum = num1 + num2;           // Calculate sum
    *average = *sum / 2.0;        // Calculate average
}

int main() {
    int num1, num2;               // Variables for input
    int sum;                      // Variable to store sum
    float average;                // Variable to store average

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function
    calculateSumAndAverage(num1, num2, &sum, &average);

    // Print the results and their memory addresses
    printf("Sum: %d, Address: %p\n", sum, (void *)&sum);
    printf("Average: %.2f, Address: %p\n", average, (void *)&average);

    return 0;
}
