#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Enter any digit number: \n");
    scanf("%d", &num);
    while (num >= 1)
    {
        sum += num;
        num--;
    }
    printf("Sum of the natural number from 1 to 10 : %d", sum);

    return 0;
}