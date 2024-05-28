#include<stdio.h>
int main() {
    float radius;
    int side;
    printf("Enter radius of Circle :");
    scanf("%f",&radius);
    printf("Enter side of Square :");
    scanf("%d",&side);
    printf("Area of Circle is : %f\n",3.14*radius*radius);
    printf("Area of Square : %d",side*side);
    
    return 0;
}