//Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)
#include<stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("Temperature in Celsius: %f\n", celsius);
     return 0;
}