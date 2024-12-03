// 
#include<stdio.h>

int main(){
    float income,tax=0;
    printf("enter income:\n");
    scanf("%f",&income);
    if(income<250000){
        printf("tax is 0");
    }
    else if(income>250000 && income<500000){
          tax  = 0.05 * (income - 250000) + 0.2*(income-500000);
         }
    else if(income>500000 && income<100000){
          tax  = 0.2 * (income - 500000) + 0.2*(income-100000)+0.3*(income-500000);
         }
         else{
          tax  = 0.3 * (income - 100000);
    }
    printf("The total tax you need to pay is: %f",tax);
     return 0;
}