#include<stdio.h>
int main(){
   int i,j,n;
   printf("Enter number: \n");scanf("%d",&n);
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if((i+j)%2==0){
            printf("%2d",1);
        }else{
            printf("%2d",2);
        }
    }
    printf("\n");
   }

    return 0;
}