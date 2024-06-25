// 1 2 3 4 5 6 7 8
// 8 7 6 5 4 3 2 1
// 1 2 3 4 5 6 7 8
// 8 7 6 5 4 3 2 1
// 1 2 3 4 5 6 7 8

#include <stdio.h>
int main()
{

    int ni, nj;
    printf("Enter number of row and column: ");
    scanf("%d %d", &ni, &nj);
    for (int i = 1; i <= ni; i++)
    {
        for (int a = nj, j = 1; j <= nj; j++)
        {
            if (i % 2 == 0)
                printf("%d ", a--);
            else
                printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}