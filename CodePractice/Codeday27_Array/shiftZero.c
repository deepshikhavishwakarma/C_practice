#include <stdio.h>

int main()
{
    int n;
    printf("How many numbers you want to store in array: \n");
    scanf("%d", &n);
    int a[n], c = 0;
    printf("Enter %d values in array: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[c++] = a[i];
        }
    }
    while (c < n)
    {
        a[c++] = 0;
    }
    printf("Final Array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    //   for(int i=0;i<n;i++)
    //   {
    //       if(a[i]!=0)
    //       printf("%d",a[i]);
    //   }
    //   for(int i=0;i<n;i++)
    //   {
    //       if(a[i]==0)
    //       printf("%d",a[i]);
    //   }

    return 0;
}