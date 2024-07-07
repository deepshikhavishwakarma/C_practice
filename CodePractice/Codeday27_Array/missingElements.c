
#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers you want to store? \n");
    scanf("%d", &n);
    printf("Enter %d values for array: ", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = 1;
    while (end < n)
    {
        if (arr[start] + 1 != arr[end])
        {
            for (int i = arr[start] + 1; i < arr[end]; i++)
            {
                printf("%d ", i);
            }
        }

        start++;
        end = start + 1;
    }

    return 0;
}