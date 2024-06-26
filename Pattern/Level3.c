// 1
// 2   3
// 4   5   6
// 7   8   9  10
// 11 12 13
// 14 15
// 16


#include <stdio.h>
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i <= n / 2 + 1)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d  ", a++);
            }
        }
        else
        {
            for (int j = i; j <= n; j++)
            {
                printf("%d  ", a++);
            }
        }
        printf("\n");
    }
}