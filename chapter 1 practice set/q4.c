// Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest
#include<stdio.h>
int main(){
    int si,r,p,y;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the number of years: ");
    scanf("%d",&y);
    printf("Enter the rate of interest: ");
    scanf("%d",&r);
    si=(p*y*r)/100;
    printf("Simple interest is %d",si);
    return 0;
}