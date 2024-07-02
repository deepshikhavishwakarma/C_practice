//           1
//        4  9
//     16 25 36
// 49 64 81 100

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i < n; i++)
    { // 1
        for (int j = n; j > i; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%3d", a * a);
            a++;
        }

        printf("\n");
    }

    return 0;
}