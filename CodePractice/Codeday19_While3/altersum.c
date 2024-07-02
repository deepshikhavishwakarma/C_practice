#include <stdio.h>
int main()
{
    int num, even, odd, rem;
    int i = 1;
    even = 0;
    odd = 0;
    printf("Enter number: ");
    scanf("%d", &num); // 12122
    while (num > 0)
    {
        rem = num % 10; // 2
        if (i % 2 == 0)
        {

            even += rem;
        }
        else
        {
            odd += rem;
        }
        num = num / 10;
        i++;
    }
    (even == odd) ? printf("Alternate digit sum is same.") : printf("Alternate digit sum is not same.");

    return 0;
}