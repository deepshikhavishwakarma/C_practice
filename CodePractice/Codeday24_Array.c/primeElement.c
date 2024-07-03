#include <stdio.h>
int main()
{
    int n = 6;
    printf("enter %d value for array: \n", n);
    int a[6];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int b = a[i];
        int count = 0;
        for (int j = 1; j <= b; j++)
        {
            if (b % j == 0)
                count++;
        }
        if (count == 2)
            printf("Prime numbers are %d \n", b);
    }

    return 0;
}