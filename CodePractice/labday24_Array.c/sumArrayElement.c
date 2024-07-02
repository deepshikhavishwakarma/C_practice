
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("How many Number you want to store: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d value for array: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("Sum of all elements is : %d ", sum);

    return 0;
}