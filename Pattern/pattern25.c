
//   1  0  1  0  1
//   0  1  0  1  0
//   1  0  1  0  1
//   0  1  0  1  0
//   1  0  1  0  1

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            // if ((i + j) % 2 == 0)
            // {
            //     printf("%2d", 0);
            // }
            // else
            // {
            //     printf("%2d", 1);
            // }

            printf("%3d", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}