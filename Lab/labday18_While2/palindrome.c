#include <stdio.h>
int main()
{

    int num, rem, divi, sum;

    printf("Enter number : ");
    scanf("%d", &num); // 121
    divi = num;
    while (num != 0)
    {
        rem = num % 10; // 1
        sum = sum * 10 + rem;
        num = num / 10; // 12
    }
    if (sum == divi)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not palindrome.");
    }

    return 0;
}