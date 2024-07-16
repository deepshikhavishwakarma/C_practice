// Write a program in C to add n natural numbers using a function.
// Test Data :
// Input n value : 10
// Expected Output :
// The sum of 10 natural numbers is 55

#include <stdio.h>
void sumNatural(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of %d natural numbers is %d", n, sum);
}
int main()
{
    int a;
    printf("Enter number a: ");
    scanf("%d", &a);
    sumNatural(a);

    return 0;
}