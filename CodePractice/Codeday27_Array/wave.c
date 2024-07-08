#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers you want to store? \n");
    scanf("%d", &n);
    printf("Enter %d values for array: ", n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // 1 2 3 4 5 6 7 8 9 10
    }
    for (int i = 0; i < n - 1; i += 2)
    { 
        // if (a[i] < a[i + 1])     // if we use this condition then we need to sort array for descending order but without this  condition we can swap any kind of values.
        // {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        // }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}