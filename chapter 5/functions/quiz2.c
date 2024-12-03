#include<stdio.h>
#include<math.h>
int main(){
    double a,area;
    printf("Enter the side length of the square: ");
    scanf("%lf", &a);
    area=pow(a,2);
    printf("Area of square is %lf",area);
     return 0;
}