//  Write the logic for thee below pattern in c ?
//   1 2 3 4 5
//   0 3 4 5 6
//   0 0 5 6 7
//   0 0 0 7 8
//   0 0 0 0 9 


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