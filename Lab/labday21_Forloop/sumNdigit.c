#include <stdio.h>
int main()
{

    int n, rem, sum;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n >= 10)
    {
        sum = 0;
        while (n != 0)
        {
            rem = n % 10;
            sum += rem;
            n = n / 10;
        }
        n = sum;
    }

    printf("Sum is : %d", sum);

    return 0;
}