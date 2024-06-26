//   1
//   2  3
//   3  4  5
//   4  5  6  7
//   5  6  7  8  9

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%4d", a++);
        }
        printf("\n");
    }

    return 0;
}