#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    if (a % b == 0)
    {
        printf("%d is divisible by %d", a, b);
    }
    else
    {
        printf("%d is divisible by %d", b, a);
    }

    return 0;
}