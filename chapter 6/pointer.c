#include<stdio.h>

int main(){
    int i =1;
    int* j=&i;//j is pointer pointing to i
    int k = 67;
    printf("The address of i is %p\n", &i);
    printf("the address of i is %p\n", j);
    printf("The value of k is %p\n", &k);

    printf("The value at address j is %d\n", *j);

    return 0;
}