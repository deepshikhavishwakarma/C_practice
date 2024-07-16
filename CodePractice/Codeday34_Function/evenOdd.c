// Write a program in C to check if a given number is even or odd using the function.

// Test Data :

// Input any number : 5

// Expected Output :
// The entered number is odd. 


#include <stdio.h>
void evenOdd(int n){
    n%2==0 ?  printf("Number is Even") : printf("Number is Odd");
   //Second method
    // if(n%2==0){
    //     return 1;
    // }else{
    //     return 0;
    // }
}
int main() {
    int a;
    printf("Enter number: ");scanf("%d",&a);
    evenOdd(a);
    //Second method
    // if( evenOdd(a)){
    //     printf("Number is Even"); 
    // }else{
    //      printf(" The entered number is odd. ");
    // }
    
    return 0;
}