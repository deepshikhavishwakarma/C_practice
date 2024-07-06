#include <stdio.h>
int main()
{
    int n = 6, count;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = ' ';
            }
        }
        if (a[i] != ' ')
        {
            printf("%d occurs %d times.\n", a[i], count);
        }
    }
    return 0;
}