#include <stdio.h>
int main()
{

    int num, sum, i = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    while (i < num)
    {
        if (num % i == 0)
            sum += i;
        i++;
    }
    if (sum == num)
    {
        printf("Perfect Number.");
    }
    else
    {
        printf("Not perfect.");
    }

    return 0;
}