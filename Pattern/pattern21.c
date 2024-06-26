//   0
//   0 1
//   0 1 0
//   0 1 0 1
//   0 1 0 1 0
//   0 1 0 1 0 1

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
            if (j % 2 == 0)
                printf("%3d", 1);
            else
                printf("%3d", 0);
        }
        printf("\n");
    }

    return 0;
}