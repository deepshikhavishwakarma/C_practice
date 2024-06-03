#include <stdio.h>
int main()
{
    int velocity, acc, times, distance;
    printf("Enter the initial velocity (m/s): ");
    scanf("%d", &velocity);
    printf("Enter the acceleration (m/s^2): ");
    scanf("%d", &acc);
    printf("Enter the time (s): ");
    scanf("%d", &times);
    distance = velocity * times + 0.5 * acc * times * times;
    printf("The distance traveled is %.2f meters.", (float)distance);

    return 0;
}