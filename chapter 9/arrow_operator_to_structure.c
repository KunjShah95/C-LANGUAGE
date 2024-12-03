#include <stdio.h>
#include <stdlib.h>

// Define a simple structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Create a pointer to a Person structure
    struct Person *p = (struct Person *)malloc(sizeof(struct Person));

    // Use the arrow operator to set values
    // Set the name and age using the pointer
    strcpy(p->name, "Alice");  // Using -> to access name
    p->age = 30;                // Using -> to access age

    // Print the values
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    // Free the allocated memory
    free(p);

    return 0;
}