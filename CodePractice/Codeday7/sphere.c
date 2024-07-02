#include<stdio.h>
int main(){
    float radius;
    printf("Welcome to Sphere Volume Calculator!\n");
    printf("Enter the radius of the sphere:");
    scanf("%f",&radius);
    radius = (4.0/3.0)*3.14*(radius*radius*radius);
    printf("Volume of the sphere is: %f cubic units",radius);
    return 0;
}