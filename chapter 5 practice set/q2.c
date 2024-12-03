#include<stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5 ) + 32;
}

int main() {
    float celsius , fahrenheit;
    printf("Enter temperature in celsius: ");
    scanf("%f",&celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("Temperature in fahrenheit: %f",fahrenheit);
    return 0;
}