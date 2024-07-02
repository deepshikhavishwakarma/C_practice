//               A
//            A     C
//         A           E
//      A                 G
//   A  B  C  D  E  F  G  H  I

    
#include<stdio.h>
int main(){
    int n,l=1;
    printf("Enter number: ");scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        for (int s =n-1; s>=i; s--)
        {
            printf("  ");
        }
        char ch='A';
        for (int j = 1; j <=l; j++)
        {
            if (j == 1|| j==l||i==n)
                printf("%c ",ch);
           
            else printf("  ");
            ch++;
        }
        l += 2;
        printf("\n");
    }
    return 0;
}