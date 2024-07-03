#include<stdio.h>
int main(){
    int n=6;
    printf("enter %d value for array: \n",n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++){//2,3,4,5,6,7
           if(a[i]<a[j]){//a[i]=2    a[j]=3  2<3
              int temp=a[i];//temp=2
               a[i]=a[j];//a[i]=3
               a[j]=temp;//a[j]=2
           }
       }
    }
     printf("Descending order\n");
     for(int i=0;i<n;i++){
         printf("%d \n",a[i]);
     }
     //printf("Second largest \n");
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1]) {
        printf("second largest %d ",a[i+1]);break;
        }
    }
    
    
    return 0;
}



//Second Approch

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter array size: ");
//     scanf("%d", &n);
//     int a[n], temp;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%4d", a[i]);
//     }
//     return 0;
// }




