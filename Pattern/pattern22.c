//     1
//     2  6
//     3  7  10
//     4  8  11  13
//     5  9  12  14  15

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int c = i, value = 4;
        for (int j = 1; j <= i; j++)
        {
            printf("%3d", c);
            c += value;
            value--;
        }
        printf("\n");
    }

    return 0;
}