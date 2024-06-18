#include <stdio.h>
int main()
{

    int num, sum, pro, rem;
    printf("Enter number: ");
    scanf("%d", &num); // 1124
    sum = 0;
    pro = 1;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        pro = pro * rem;
        num = num / 10;
    }
    // printf("%d\n %d\n",sum,pro);
    (sum == pro) ? printf("Spy number") : printf("Not spy number.");

    return 0;
}