// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7

#include <stdio.h>
int main()
{
    int i, j, n, a;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (a = i, j = 1; j <= n; j++)
        {

            printf("%2d", a++);
        }
        printf("\n");
    }

    return 0;
}