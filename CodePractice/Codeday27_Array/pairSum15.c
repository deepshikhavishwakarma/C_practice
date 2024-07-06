
#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers you want to store in array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d values in array: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i + 1; j <= n; j++)
        {
            sum = a[i] + a[j];
            if (sum == 15)
                printf("(%d , %d)= %d \n", a[i], a[j], sum);
        }
    }

    return 0;
}