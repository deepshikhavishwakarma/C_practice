#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            printf("%2d", 1 + j - 1);
        }
        printf("\n");
    }
    return 0;
}