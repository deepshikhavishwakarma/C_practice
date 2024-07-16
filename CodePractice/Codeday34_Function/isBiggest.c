// Write a C program to find the biggest number between three number using the function.

// Test Data :

// Input three positive number : 13 31 19

// Expected Output :

// The biggest number is 31

#include <stdio.h>
void isBiggest(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
    {
        printf("The biggest number is %d", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("The biggest number is %d", n2);
    }
    else if (n1 == n3 && n3 == n2)
    {
        printf("The number are equals.");
    }
    else if (n1 == n2 && n1 > n3)
    {
        printf("The number is %d & %d are equal and big", n1, n2);
    }
    else
    {
        printf("The biggest number is %d", n3);
    }
}
int main()
{
    int a, b, c;
    printf("Enter number a,b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    isBiggest(a, b, c);

    return 0;
}