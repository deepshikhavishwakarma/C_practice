// Sum of all elements
// Create a function to calculate the sum of all elements in an integer array.
// Sample Input
// Input:
// Size of the array: 5
// Array elements: 10 20 30 40 50
// Sample Output
// Output:
// Sum of all elements in the array: 150


#include<stdio.h>
#include<string.h>
int isSum(int n[],int len){
    int i,sum=0;
    for( i=0;i<len;i++){
     sum+=n[i];
    }
    printf("Sum of all elements in the array: %d",sum);
    return sum;
}
int main(){
    int s;
    printf("Enter size of array: ");scanf("%d",&s);
   int arr[s];
   printf("Array elements: ");
   for(int i=0;i<s;i++){
       scanf("%d",&arr[i]);
   }
    isSum(arr,s);
    return 0;
}