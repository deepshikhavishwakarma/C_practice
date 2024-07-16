// Write a program in C to find the square of any number using the function.
// Test Data :
// Input any number for square : 20
// Expected Output :
// The square of 20 is : 400.00



#include <stdio.h>
int square(int n)
{
    n = n * n;
    return n;
}
int main()
{
    int a = 20;
    printf("The Square of %d is : %d", a, square(a));
    return 0;
}