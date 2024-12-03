#include <stdio.h>

// Define the structure for Complex using typedef
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to display a complex number
void displayComplex(Complex c) {
    if (c.imag < 0)
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    else
        printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    Complex num1, num2, sum;

    // Take input for two complex numbers
    printf("Enter the real and imaginary parts of the first complex number (a + bi):\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);

    printf("\nEnter the real and imaginary parts of the second complex number (a + bi):\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);

    // Perform addition of complex numbers
    sum = addComplex(num1, num2);

    // Display the sum of complex numbers
    printf("\nThe sum of the complex numbers is: ");
    displayComplex(sum);

    return 0;
}
