//  Write a program to calculate the factorial of a given number using a while loop.
#include<stdio.h>
int main(){
    int i,fact=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}