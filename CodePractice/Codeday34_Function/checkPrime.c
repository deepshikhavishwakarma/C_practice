// Write a program in C to check whether a number is a prime number or not by using the function.

// Test Data :

// Input a positive number : 5

// Expected Output :

// The number 5 is a prime number.

#include <stdio.h>
int isPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    isPrime(a) ? printf("The number %d is a prime number.", a) : printf("The number %d is not a prime number.", a);

    return 0;
}