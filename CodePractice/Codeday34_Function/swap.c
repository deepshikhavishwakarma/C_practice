// Write a program in C to swap two numbers using a function.
// Test Data :
// Input 1st number : 2
// Input 2nd number : 4
// Expected Output :
// Before swapping: n1 = 2, n2 = 4
// After swapping: n1 = 4, n2 = 2

#include <stdio.h>
void swap(int n1, int n2)
{
    printf("Before swapping: n1=%d, n2 = %d\n", n1, n2); // 4 7
    //   int temp =n1;
    //   n1=n2;
    //   n2=temp;
    // second method
    n1 = n1 + n2; // 4+7=11
    n2 = n1 - n2; // 11-7=4
    n1 = n1 - n2; // 11-4=7

    printf("After swapping: n1=%d, n2 = %d", n1, n2);
}
int main()
{
    int a, b;
    printf("Enter number a and b: ");
    scanf("%d%d", &a, &b);
    swap(a, b);

    return 0;
}