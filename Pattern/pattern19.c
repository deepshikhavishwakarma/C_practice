// 1
// 1  2
// 3  5  8
// 13 21 34 55                     (fibonacci series)

#include <stdio.h>
int main()
{
    int n, a = 1, b = 1, c;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%4d", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }
    return 0;
}