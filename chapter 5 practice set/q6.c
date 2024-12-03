#include<stdio.h>

int sumofNaturalNumbers(int n){
 //base case: when n is 1, return 1
    if(n==1){
        return 1;
    }
    //recursive case: sum = n + sum of first (n-1) natural numbers
    return n + sumofNaturalNumbers(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d",n,sumofNaturalNumbers(n));   
         return 0;
}