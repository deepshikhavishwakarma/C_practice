#include <stdio.h>
int main()
{
    int sum = 0, rem, cube, n;
    // printf("Enter number: ");scanf("%d",&num);//153
    // d=num;//153

    for (int i = 100; i <= 999; i++)
    {
        n = i;
        sum = 0;
        cube = 0;

        while (n != 0)
        {
            rem = n % 10;
            cube = rem * rem * rem;
            sum += cube;
            n = n / 10;
        }
        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}