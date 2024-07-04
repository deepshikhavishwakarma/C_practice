// Without using 3rd variable
//  Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("How many number you want to add: \n");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {                                       // 2 3 4 7 5 6 8
        a[i] = a[i] + a[n - i - 1];         // 2+8=10
        a[n - i - 1] = a[i] - a[n - i - 1]; // 10-8=2
        a[i] = a[i] - a[n - i - 1];         // 10-2=8
    }
    printf("Reverse Order is");
    for (int i = 0; i < n; i++)
    {
        printf("%4d ", a[i]);
    }

    return 0;
}