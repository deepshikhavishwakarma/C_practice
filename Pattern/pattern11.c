//   1  0  0  0  0
//   2  1  0  0  0
//   2  2  1  0  0
//   2  2  2  1  0
//   2  2  2  2  1

#include <stdio.h>
int main()
{

    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i)
                printf("%3d", 1);
            else if (i > j)
                printf("%3d", 2);
            else
                printf("%3d", 0);
        }
        printf("\n");
    }

    return 0;
}