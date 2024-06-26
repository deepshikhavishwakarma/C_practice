// 5 10 15 20 25
// 4 9  14 19 24
// 3 8  13 18 23
// 2 7  12 17 22
// 1 6  11 16 21

#include <stdio.h>
int main()
{

    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        int k = i;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", k);
            k = k + 5;
        }
        printf("\n");
    }

    return 0;
}