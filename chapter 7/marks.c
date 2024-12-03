#include<stdio.h>

int main(){
    int marks[5];
    printf("Enter the marks of 5 students: ");
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    printf("The marks are: ");
    for(int i=0;i<5;i++){
        printf("%d ",marks[i]);
    }

     return 0;
}