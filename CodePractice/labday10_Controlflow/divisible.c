#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number ");
    scanf("%d", &number);
    if (number % 5 == 0 && number % 11 == 0)
    {
        printf("%d is divisible by both 5 and 11", number);
    }
    else
    {
        printf("Not divisible by 5 and 11");
    }

    return 0;
}