#include <stdio.h>

int main() {
    // A string literal, which is an array of characters
    char *str = "Hello, World!";
    
    // Pointer arithmetic to access characters
    printf("%c\n", *str);           // Output: H
    printf("%c\n", *(str + 7));     // Output: W

    // Print the whole string using the pointer
    printf("%s\n", str);            // Output: Hello, World!
    
    return 0;
}
