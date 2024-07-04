#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("How many number you want to add: \n");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse Order is");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%4d ", a[i]);
    }

    return 0;
}