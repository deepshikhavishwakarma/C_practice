// with using 3rd  variable
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
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("Reverse Order is");
    for (int i = 0; i < n; i++)
    {
        printf("%4d ", a[i]);
    }

    return 0;
}