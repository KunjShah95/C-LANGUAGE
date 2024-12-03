#include<stdio.h>

int main(){
    int i = 10;
    int *ptr = &i;    // Pointer to i
    int **ptr2 = &ptr; // Pointer to pointer ptr

    // Print the value of i using pointer to pointer
    printf("The value of i is %d\n", **ptr2);
     return 0;
}