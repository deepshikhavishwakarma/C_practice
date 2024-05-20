#include<stdio.h>
#include<stdlib.h>
#include<Math.h>

void main(){
    printf("%d\n",5%2);   //1
    printf("%d\n",2%5);   //2
    printf("%d\n",52%77);  //52

    //printf("%d\n",52%2.0);    //error Illegal use of floating point in function main

    //printf("%d\n",52.0%7);   //error Illegal use of floating point in function main

    printf("%f\n",fmod(52.0 ,7.0));  //3.000000
    printf("%f\n",fmod(5 ,7.0));  //5.000000
    printf("%f\n",fmod(5.0 ,7));  //5.000000
    printf("%f\n",fmod(52 ,7));   //3.000000

    // printf("%f",5.0 % 2.0);
    
    //  error Illegal use of floating point in function main
   //5.0%2.0=Error
   //Note: In C & C++ we can’t perform floating modules with % operator. For this we have to use fmod( ) function available in <math.h>
//    --------------------------------------------
// 291%10=1
// 24%10=4
// 3%10=3
// Note: Any no%10 gives last digit
// example
printf("%d\n%d\n%d\n",321%10,24%10,3%10);  //143

printf("------------------------------------------------"); 
// -5%2= -1
// 5%-2= 1
// -5%-2= -1
// Note: In Modules if the numerator is negative then 
// result also negative
// example
printf("\n%d\n%d\n%d\n",-5%2, 5%-2,-3%-2);  //o/p   -1    1  -1


}