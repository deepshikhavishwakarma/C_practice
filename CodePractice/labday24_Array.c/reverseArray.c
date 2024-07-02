#include <stdio.h>

int main()
{
    int n = 6, a[n];
    printf("Enter %d value for array: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse of Array is: \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}