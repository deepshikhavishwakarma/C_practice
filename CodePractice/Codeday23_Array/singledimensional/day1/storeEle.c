#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%4d", a[i]);
    }
}