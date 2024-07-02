//        1
//      2 4
//    3 6 9
// 4 8 12 16

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a * j);
        }
        printf("\n");
    }

    return 1;
}