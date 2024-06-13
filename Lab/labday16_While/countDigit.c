#include <stdio.h>
int main()
{
    int num, rem, count;

    printf("Enter any digit number: \n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        count++;
        num = num / 10;
    }
    printf("Count of the digits is: %d", count);
    return 0;
}