#include <stdio.h>
int main()
{
    int n = 6;
    printf("enter %d value for array: \n", n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        { // 2,3,4,5,6,7,3,6
            if (a[i] > a[j])
            {                    // a[i]=2    a[j]=3  2<3
                int temp = a[i]; // temp=2
                a[i] = a[j];     // a[i]=3
                a[j] = temp;     // a[j]=2
            }
        }
    }
    // printf("Descending order\n");
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < a[n - 1])
        {
            printf("second largest %d ", a[i]);
            break;
        }
    }

    return 0;
}
