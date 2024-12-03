//. Write a program to check whether a given number is prime or not using while and dowhile loops
// #include<stdio.h>
// int main(){
//     int n,i=2;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while(i<n){
//         if(n%i==0){
//             printf("%d is not a prime number",n);
//             break;
//         }
//         i++;
//     }
//     if(i==n){
//         printf("%d is a prime number",n);
//     }
//     return 0;
// }

//dowhile
#include<stdio.h>
int main(){
    int n,i=2;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{
        if(n%i==0){
            printf("%d is not a prime number",n);
            break;
        }
        i++;
    }while(i<n);
    if(i==n){
        printf("%d is a prime number",n);
    }
    return 0;
}       