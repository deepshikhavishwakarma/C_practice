
#include <stdio.h>

int main()
{
    int arr[50], even[50], odd[50], n, e = 0, o = 0;
    ;
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter %d elements \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }
    printf("\neven elements\n");
    for (int i = 0; i < e; i++)
    {
        printf("%d \n", even[i]);
    }
    printf("\nodd elements\n");
    for (int i = 0; i < o; i++)
    {
        printf("%d \n", odd[i]);
    }
    return 0;
}