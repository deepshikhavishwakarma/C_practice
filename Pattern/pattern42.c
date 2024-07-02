//    1   2   3
//    6   5   4
//    7   8   9
//    12 11  10
//    13 14  15

#include <stdio.h>
int main()
{
    int n;
    int a = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i % 2 == 0)
                printf("%d ", --a);
            else
                printf("%d ", a++);
        }
        a += 3;
        printf("\n");
    }

    return 0;
}