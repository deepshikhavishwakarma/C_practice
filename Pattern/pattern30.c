//               1
//            1  2  3
//         1  2  3  4  5
//      1  2  3  4  5  6  7
//   1  2  3  4  5  6  7  8  9

#include <stdio.h>
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // char ch='A';
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            if (n - i >= j)
                printf("%3c", 32);
            else
                printf("%3d", a++);
        }
        for (int k = i - 1; k >= 1; k--)
        {
            printf("%3d", a++);
        }
        printf("\n");
    }
}