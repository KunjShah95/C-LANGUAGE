// #include<stdio.h>

// int main(){
//     int a[5];
//     printf("Address of array element a[0] is %p \n", (void*)&a[0]);
//     printf("Address of array element a[1] is %p \n", (void*)&a[1]);
//     printf("Address of array element a[2] is %p \n", (void*)&a[2]);
//     printf("Address of array element a[3] is %p \n", (void*)&a[3]);
//     printf("Address of array element a[4] is %p \n", (void*)&a[4]);

//      return 0;
// }   

// using loop
#include<stdio.h>

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        printf("Address of array element a[%d] is %p \n", i, (void*)&a[i]);
        }
        return 0;
        }