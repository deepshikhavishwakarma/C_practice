// 1 1 1 1 1 1 
// 1 1 1 1 2 2 
// 1 1 1 3 3 3 
// 1 1 4 4 4 4 
// 1 5 5 5 5 5 
// 6 6 6 6 6 6 

#include <stdio.h>
int main()
{

    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
                printf("%d ", 1);
            else
                printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}