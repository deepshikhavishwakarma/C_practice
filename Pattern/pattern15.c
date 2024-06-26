//   1 6 11 16 21
//   2 7 12 17 22
//   3 8 13 18 23
//   4 9 14 19 24
//   5 10 15 20 25

#include <stdio.h>
int main()
{

    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
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
