#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    (num % 2 == 0) && printf("%d is an Even number.", num);
    (num % 2 != 0) && printf("%d is an Odd number.", num);

    return 0;
}