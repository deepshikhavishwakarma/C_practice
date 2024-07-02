#include <stdio.h>
int main()
{
    int a[10], b[10], n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf(" Enter value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    printf("The elements copied into the second array of b[] are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}