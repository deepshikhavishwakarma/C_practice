// 1 2 3 4
// 2 4 6 8
// 3 6 9 12
// 4 8 12 16

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}