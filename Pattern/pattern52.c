// 1 2 3 4 5 
// 1       5 
// 1       5 
// 1       5 
// 1 2 3 4 5 

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            if (j == 1||i==1||i==n  || j == n)
                printf("%d ",j);
            else
                printf("  ");
        }
        
        printf("\n");
    }
    return 0;
}