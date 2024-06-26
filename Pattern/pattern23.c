// 0
// 0 1
// 0 1 1
// 0 1 1 2
// 0 1 1 2 3

#include <stdio.h>
int main()
{
    int n, a, b, c;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a = 0, b = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%3d", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}