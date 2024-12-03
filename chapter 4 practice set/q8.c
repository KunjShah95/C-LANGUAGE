//. Write a program to check whether a given number is prime or not using loops

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%d is not a prime number",n);
            break;
        }
    }
    if(i==n){
        printf("%d is a prime number",n);
    }
    return 0;
}