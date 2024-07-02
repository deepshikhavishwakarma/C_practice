//               A
//            A  B  C
//         A  B  C  D  E
//      A  B  C  D  E  F  G
//   A  B  C  D  E  F  G  H  I

#include <stdio.h>
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            if (n - i >= j)
                printf("%3c", 32);
            else
                printf("%3c", ch++);
        }
        for (int k = i - 1; k >= 1; k--)
        {
            printf("%3c", ch++);
        }
        printf("\n");
    }
}