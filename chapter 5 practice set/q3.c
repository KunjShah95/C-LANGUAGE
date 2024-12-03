#include<stdio.h>
double calculate_force_of_attraction(double mass){
    const  double g = 9.8;
    double force = g*mass;
    return force;
}
int main(){
    double mass = 10.0; // in kg
    double force = calculate_force_of_attraction(mass);
    printf("The force of attraction is %f N", force);
     return 0;
}