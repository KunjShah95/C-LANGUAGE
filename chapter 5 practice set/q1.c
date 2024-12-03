#include<stdio.h>

void average(float x, float y, float z) {
    float avg = (x + y + z) / 3;
    printf("The average of %f, %f and %f is %f\n", x, y, z, avg);
}

int main() {
    float x, y, z;
    printf("Enter the first number: ");
    scanf("%f", &x);
    printf("Enter the second number: ");
    scanf("%f", &y);
    printf("Enter the third number: ");
    scanf("%f", &z);
    average(x, y, z);
    return 0;
}