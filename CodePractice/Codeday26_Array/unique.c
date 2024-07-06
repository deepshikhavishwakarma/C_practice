
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
        int count = 1;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count == 1)
            printf("%d ", a[i]);
    }

    return 0;
}