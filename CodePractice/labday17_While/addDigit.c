#include <stdio.h>
int main()
{
    int num, rem;
    int sum = 0;
    printf("Enter any digit number: \n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    printf("Addition of all digits are: %d", sum);
    return 0;
}