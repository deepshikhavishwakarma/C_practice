#include <stdio.h>

int main()
{
    int n, ele, f = 0;
    printf("How many number you want to store: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d element: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // 2 3 4 7 5 6 8
    }
    printf("Enter element that you want to search: ");
    scanf("%d", &ele);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            printf("%d in %d cell and index is %d \n",ele,i+1,i);
            f++;
        }
    }
    if (f == 0)
        printf("Element not found");

    return 0;
}