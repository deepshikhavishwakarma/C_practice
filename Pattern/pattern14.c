// 1 1 2 1 3 1
// 1 2 2 2 3 2
// 1 3 2 3 3 3
// 1 4 2 4 3 4
// 1 5 2 5 3 5

#include <stdio.h>
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= n; j++)
        {
            if (j % 2 != 0)
                printf("%4d", k++);
            else
                printf("%4d", i);
        }
        printf("\n");
    }
}