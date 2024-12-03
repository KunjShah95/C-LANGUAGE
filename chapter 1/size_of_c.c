#include <stdio.h>

int main() {
    int a = 5;  // An integer
    char c = 'k';  // A character
    float b = 3.14;  // A floating point number

    // Using sizeof to get the size of each data type
    printf("Size of a (int): %zu bytes\n", sizeof(a));  // Size of integer variable
    printf("Size of c (char): %zu byte\n", sizeof(c));  // Size of character variable
    printf("Size of b (float): %zu bytes\n", sizeof(b));  // Size of float variable

    // You can also use sizeof with data types directly:
    printf("Size of int: %zu bytes\n", sizeof(int));  // Size of int type
    printf("Size of char: %zu byte\n", sizeof(char));  // Size of char type
    printf("Size of float: %zu bytes\n", sizeof(float));  // Size of float type

    return 0;
}
