#include<stdio.h>
 void printFibonacci(int n){
     int first=0,second=1,next;
    
        // If the user asks for 0 or 1 terms, handle those cases    // If the user asks for 0 or 1 terms, handle those cases
     if(n<=0){
         printf("Please enter a positive integer.");
     return ;
     }
     printf("Fibonacci Series: ");
    // Print the first two numbers of the Fibonacci series
     printf("%d ", first);
     if(n>1){
        printf("%d ", second);
     }
         // Calculate the next numbers in the series
     for(int i=3;i<=n;i++){
        next=first+second;
        printf("%d ", next);
        first=second; //updates first to second
        second=next; //updates second to next 
     }
     printf("\n");
 }
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printFibonacci(n);
     return 0;
}