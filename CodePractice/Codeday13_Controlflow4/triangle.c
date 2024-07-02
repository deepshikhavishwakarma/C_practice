#include <stdio.h>

int main()
{
    float side1, side2, side3;
    printf("Enter the lengths of the sides of the triangle: \n");
    scanf("%f", &side1);
    scanf("%f", &side2);
    scanf("%f", &side3);
    if ((side1 == side2) && (side1 == side3))
    {
        printf("The triangle is an equilateral triangle.");
    }
    else if ((side1 == side2 && side1 != side3) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1))
    {
        printf("The triangle is an isosceles triangle.");
    }
    else
    {
        printf("The triangle is an scalene triangle.");
    }

    return 0;
}