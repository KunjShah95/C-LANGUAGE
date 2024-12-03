//1Write a C program to calculate area of a rectangle:a. Using hard coded inputs.b. Using inputs supplied by the user.//
//a
// #include<stdio.h>
// int main(){
//     int length=3;
//     int breadth=4;
//     int area=length*breadth;
//     printf("Area of rectangle is %d",area);
//     return 0;
// }

//b
#include<stdio.h>
int main(){
    int length,breadth,area;
    printf("Enter the length of rectangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area of rectangle is %d",area);
    return 0;
}