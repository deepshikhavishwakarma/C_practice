#include <stdio.h>
int main()
{
    int a[10], n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf(" Enter value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for (int i = 0; i < n; i++)
    {

        if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }

        // if(a[i] > a[i+1]) min = a[i];
        // else max=a[i+1];
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d", min);

    return 0;
}