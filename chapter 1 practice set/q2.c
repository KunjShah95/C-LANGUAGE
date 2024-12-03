//Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
#include<stdio.h>
int main(){
    float pi=3.14,radius,height,area,volume;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    printf("Enter the height of cylinder: ");
    scanf("%f",&height);
    area=pi*radius*radius;
    volume=area*height;
    printf("Area of circle is %f\n",area);
    printf("Volume of cylinder is %f\n",volume);
    return 0;    
}