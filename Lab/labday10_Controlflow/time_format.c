#include <stdio.h>

int main()
{
    int hour;
    printf("Enter the hour (24-hour format): ");
    scanf("%d", &hour);
    if (hour >= 5 && hour <= 12)
    {
        printf("It's Morning dear.");
    }
    else if (hour >= 12 && hour <= 17)
    {
        printf("It's Afternoon dear.");
    }
    else if (hour >= 17 && hour <= 21)
    {
        printf("It's Good Evening dear.");
    }
    else if (hour >= 22 && hour < 24)
    {
        printf("It's Night dear.");
    }
    else
    {
        printf("You are out of zone.");
    }

    return 0;
}