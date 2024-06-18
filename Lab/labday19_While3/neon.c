#include <stdio.h>
int main()
{
    int num, sum, sqr, n, rem;
    printf("Enter number: ");
    scanf("%d", &num); // 9
    n = num;
    sum = 0;
    sqr = num * num; // 81

    while (sqr != 0)
    {
        rem = sqr % 10; // 1
        sum += rem;
        sqr = sqr / 10;
    }

    // printf("%d",sum);
    (sum == n) ? printf("Neon number.") : printf("Not neon number");

    return 0;
}