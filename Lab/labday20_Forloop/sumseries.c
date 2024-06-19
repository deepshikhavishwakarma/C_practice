#include <stdio.h>
int main()
{
    int num, x;
    int sum = 0;
    printf("Input number of terms : ");
    scanf("%d", &num);
    x = 1;
    for (int i = 1; i <= num; i++)
    {
        printf(" %d +", x);

        sum += x;
        x = x * 10 + 1;
    }
    printf("\b \nThe sum is: %d", sum);
    return 0;
}