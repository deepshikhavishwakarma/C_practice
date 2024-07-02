// #include<stdio.h>
// int main(){
//   int a[3]={2,5,8};
//   int sum=0;
//   for(int i=0;i<3;i++){
//     sum+=a[i];
//   }
// printf("Sum is %d: ",sum);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[3];
    int sum = 0;
    printf("Input the number of elements to be stored in the array");
    for (int i = 0; i < 3; i++)
    {
        printf("element-%d :\n", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        sum += a[i];
    }
    printf("Sum of all elements stored in the array is  %d: \n", sum);

    return 0;
}