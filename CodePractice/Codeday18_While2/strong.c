#include <stdio.h>
int main()
{
    int num, rem, n;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);
    n = num;
    while (num != 0)
    {
        rem = num % 10; // 5
        int fac = 1;
        while (rem > 0)
        {
            fac = fac * rem;
            rem--;
        }
        sum = sum + fac;
        num = num / 10; // 14
        // printf("%d \n",fac);
    }
    // printf("%d",sum);
    (sum == n) ? printf("%d is Strong Number.", n) : printf("%d is not strong number.");

    return 0;
}