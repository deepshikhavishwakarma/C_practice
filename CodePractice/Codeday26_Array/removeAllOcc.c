#include <stdio.h>
int main()
{
    int n, ele;
    printf("Input size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the element that you want to delete :");
    scanf("%d", &ele);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != ele)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}