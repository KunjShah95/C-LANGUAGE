#include<stdio.h>

int main(){
    int age=45;
    printf("%d\n",age);
    if (age>60){
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age>18){
        printf("You can drive\n");
        }
        else{
            printf("You cannot drive\n");
        }
     return 0;
}