#include <stdio.h>

int main()
{
    int num, last;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10; // 15%10=5

    if (last < 5)
    {
        printf("Output is : %d", num * num);
    }
    else
    {
        printf("%d", num);
    }

    return 0;
}
