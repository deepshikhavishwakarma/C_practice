#include <stdio.h>
int main()
{
    int n = 5, ele;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the position which to delete:  \n");
    scanf("%d", &ele);
    for (int i = 0; i < n; i++)
    {
        if (i == (ele - 1))
        {
            for (int k = i; k < n; k++)
            {
                a[k] = a[k + 1];
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}