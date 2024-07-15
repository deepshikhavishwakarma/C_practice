#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a=i;
        for (int j = 1; j <= n; j++)
        {
            if(i<=j){
            printf("%d ",a);
            a++;
                
            }else{
                printf("0 ");
                a++;
            }
        }
        printf("\n");
    }

    return 0;
}