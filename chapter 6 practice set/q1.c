#include<stdio.h>

int main(){
    int a = 5;
    int* b = &a;
    printf("The address of a is %u\n",&a);
    printf("The value of b is %d\n",*b);
     return 0;
}