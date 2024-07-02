//   0  1  0  1  0
//   0  0  0  0  0
//   0  1  0  1  0
//   0  0  0  0  0
//   0  1  0  1  0

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%3d", (i * j) % 2);
        }
        printf("\n");
    }

    return 0;
}