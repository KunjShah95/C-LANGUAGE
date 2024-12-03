#include<stdio.h>

int main(){
     // POINTER ARITHMETIC USING INT POINTER
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The value of a is %d\n", ptr);
    // ptr++;
    // printf("The value of a is %d\n", *ptr); 

    // POINTER ARITHMETIC USING CHAR POINTER
    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The value of a is %c\n", *ptr);
    ptr++;  
    printf("The value of a is %c\n", *ptr);
    return 0;

}