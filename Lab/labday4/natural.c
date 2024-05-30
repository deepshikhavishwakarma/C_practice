#include <stdio.h>
int main()
{
    int num;
    int count;

    printf("Enter a positive integer : \n");
    scanf("%d", &num);
    count = (num * (num + 1)) / 2;
    printf("The sum of natural numbers from %d ", count);

    return 0;
}