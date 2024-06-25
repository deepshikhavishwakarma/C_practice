// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44

#include<stdio.h>
int main(){
   int i,j,n;
   printf("Enter number: \n");scanf("%d",&n);
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        printf("%d%d ",i,j);
    }
    printf("\n");
   }

    return 0;
}