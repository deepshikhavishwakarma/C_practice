// 1
// 1  2   1
// 1  2   3   2   1
// 1  2   3   4   3   2   1
// 1  2   3   4   5   4   3   2   1

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}