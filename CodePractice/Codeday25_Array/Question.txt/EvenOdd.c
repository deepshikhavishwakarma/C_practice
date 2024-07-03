#include <stdio.h>
int main()
{
    int even[10], odd[10], e = 0, o = 0;
    int n;
    printf("How many elements do you want to enter: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d values of array :", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // int a[6]={6,3,5,7,8,2};
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[e++] = a[i];
        }
        else
        {
            odd[o++] = a[i];
        }
    }
    printf("The Even elements are: \n");
    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("The Odd elements are: \n");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}