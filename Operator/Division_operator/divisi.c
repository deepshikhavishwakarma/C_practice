#include<stdio.h>
#include<stdlib.h>
#include<Math.h>

void main(){
    printf("%d\n",5/2);   //2
    printf("%f\n",2.5/2);   //1.250000
    printf("%f\n",5.2/7.7);  //0.675325


// int a=5.3;  5 /* implicit type casting */
// float a=2;  2.000000 /* implicit type casting */
// 5/(float)2=2.500000
// (float)(5/2)=2.000000
 int a=2.4; //implicit type casting
 float b= 2;

 printf("a=%d\n",a);   //2
    printf("b=%f\n",b);   //2.000000
    printf("%f\n",(float)5/7);  //0.714286
    printf("%f\n",5/(float)7);  //0.714286
    printf("%f\n",(float)(5/7));  //0.000000

// 123/10=12
// 12/10=1
// 1/10=0
// Note: Any no/10 removes last digit.

printf("%d\n",123/10); //12
printf("%d\n",12/10);  //1
printf("%d\n",1/10);   //0

// -5/2= -2
// 5/-2= -2
// -5/-2= 2
// Note: In division any one operand is negative then 
// result also negative. If both are negative then result is 
// positive

printf("%d, %d, %d ",-5/2,5/-2,-5/-2); //-2  -2  2

}