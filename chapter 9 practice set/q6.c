#include <stdio.h>

// Define a structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

// Function to display a complex number
void displayComplex(struct Complex c) {
    if (c.imag < 0)
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    else
        printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    struct Complex numbers[5];  // Array of 5 complex numbers
    int i;

    // Take input for 5 complex numbers
    printf("Enter the real and imaginary parts of 5 complex numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Complex number %d:\n", i + 1);
        printf("Real part: ");
        scanf("%f", &numbers[i].real);
        printf("Imaginary part: ");
        scanf("%f", &numbers[i].imag);
    }

    // Display the complex numbers
    printf("\nThe entered complex numbers are:\n");
    for (i = 0; i < 5; i++) {
        displayComplex(numbers[i]);
    }

    return 0;
}
