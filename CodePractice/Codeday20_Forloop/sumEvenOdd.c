#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Input number of terms : ");
    scanf("%d", &num);
    printf("The even numbers are :");
    // int c=5;
    for (int i = 1; i <= num * 2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nThe Sum of even Natural Number upto %d terms : %d", num, sum);

    return 0;
}