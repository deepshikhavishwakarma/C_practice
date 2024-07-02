// * * * * * * * * *
//   *           *
//     *       *
//       *   *
//         *

#include <stdio.h>
int main()
{
    int n, r = 9;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s < i; s++)
        {
            printf("  ");
        }
        for (int j = r; j >= 1; j--)
        {
            if (j == r || i == 1 || j == 1)
                printf("* ");
            else
                printf("  ");
        }
        r -= 2;
        printf("\n");
    }
    return 0;
}