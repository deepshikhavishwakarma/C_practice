#include <stdio.h>

int main()
{
    int num;
    printf("Enter month number(1-12): ");
    scanf("%d", &num);
    if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12)
    {
        printf("Number of days: 31");
    }
    else if (num == 2)
    {
        printf("According to leap year Number of days is: 28/29");
    }
    else if (num > 12)
    {
        printf("Invalid");
    }
    else
    {
        printf("Number of days: 30");
    }

    return 0;
}
