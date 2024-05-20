//Prog1  --------------swap without 3rd variable
#include<stdio.h>
void main(){
    int a = 10;
    int b = 5;
    a = a+b;//15
    b = a-b;//15-5=10,          b=10
    a = a-b;// 15-10=5 ,        a = 5
    printf("a = %d, b = %d\n", a, b);
}